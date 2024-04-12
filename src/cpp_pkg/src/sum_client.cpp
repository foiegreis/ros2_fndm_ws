#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

class SumClientNode : public rclcpp::Node
{
public: 
    SumClientNode() : Node("sum_client_node")
    {   
        //declare parameters
        this->declare_parameter<int>("a", 0);
        this->declare_parameter<int>("b", 0);

        //get parameters
        this->get_parameter("a", a_);
        this->get_parameter("b", b_);

        threads_.push_back(std::thread(std::bind(&SumClientNode::CallSumServer, this, a_, b_)));
    }
    void CallSumServer(int a, int b)
    {
        //create client
        client_ = this->create_client<example_interfaces::srv::AddTwoInts>("sum_service");
        while (!client_->wait_for_service(std::chrono::seconds(1))){
            RCLCPP_WARN(this->get_logger(), "Waiting for the Server...");
        }
        
        //create request message
        auto request = std::make_shared<example_interfaces::srv::AddTwoInts::Request>();
        request->a = a;
        request->b = b;

        // future = client.call_async
        auto future = client_->async_send_request(request);
        try{
            auto response = future.get();
            RCLCPP_INFO(this->get_logger(), "%d + %d = %d", a, b, (int)response->sum);
        }
        catch(const std::exception& e){
            RCLCPP_ERROR(this->get_logger(), "Service call failed");
        }
    }
private:
    rclcpp::Client<example_interfaces::srv::AddTwoInts>::SharedPtr client_;
    std::vector<std::thread> threads_;
    int a_, b_;
};  

int main(int argc, char** argv){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SumClientNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
