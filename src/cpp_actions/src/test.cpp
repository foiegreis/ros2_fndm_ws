#include "rclcpp/rclcpp.hpp"
#include "ros2_fndm_interface/action/fibonacci.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp_components/register_node_macro.hpp"

#include <functional>
#include <memory>
#include <thread>


class FibonacciServerNode : public rclcpp::Node
{
public:
    using Fibonacci = ros2_fndm_interface::action::Fibonacci;
    using GoalHandle = rclcpp_action::ServerGoalHandle<Fibonacci>;

    explicit FibonacciServerNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions()) : Node("fibonacci_server_node", options)
    {

        using namespace std::placeholders;

        //instantiate action server
        this->action_server_ = rclcpp_action::create_server<Fibonacci>(
            this,
            "fibonacci",
            std::bind(&FibonacciServerNode::handle_goal, this, _1, _2),
            std::bind(&FibonacciServerNode::handle_accepted, this, _1));
    }


private:
    rclcpp_action::Server<Fibonacci>::SharedPtr action_server_;

    rclcpp_action::GoalResponse handle_goal(const rclcpp_action::GoalUUID & uuid, std::shared_ptr<const Fibonacci::Goal> goal)
    {
        //handles goal
        
        RCLCPP_INFO(this->get_logger(), "Received goal request with order %d", goal->order);
        (void)uuid;
        

        if (goal->order > 9000){
            return rclcpp_action::GoalResponse::REJECT;
        }
        return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;

    }

    void handle_accepted(const std::shared_ptr<GoalHandle> goal_handle)
    {
        using namespace std::placeholders;
        //spin a new thread so the execution is quickly
        std::thread{std::bind(&FibonacciServerNode::execute, this, _1), goal_handle}.detach();
    }


    void execute(const std::shared_ptr<GoalHandle> goal_handle)
    {
        RCLCPP_INFO(this->get_logger(), "Executing goal");
        rclcpp::Rate loop_rate(1);
        const auto goal = goal_handle->get_goal();

        //initialize feedback message
        auto feedback = std::make_shared<Fibonacci::Feedback>();
        auto & sequence = feedback->partial_sequence;

        //process fibonacci sequence
        sequence.push_back(0);
        sequence.push_back(0);
        auto result = std::make_shared<Fibonacci::Result>();

        for (int i = 1; (i < goal->order) && rclcpp::ok(); ++i){

            sequence.push_back(sequence[i] + sequence[i-1]);
            //punlish feedback
            goal_handle->publish_feedback(feedback);
            RCLCPP_INFO(this->get_logger(), "Publish feedback");

            loop_rate.sleep();
        }

        //check if the goal is done
        if (rclcpp::ok()){
            result->result_sequence = sequence;
            goal_handle->succeed(result);
            RCLCPP_INFO(this->get_logger(), "Goal Succeeded");
        }

    } //private
}; //class

int main(int argc, char* argv[]){

    rclcpp::init(argc, argv);
    auto node = std::make_shared<FibonacciServerNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}


