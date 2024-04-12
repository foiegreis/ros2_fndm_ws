#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

using std::placeholders::_1;
using std::placeholders::_2;


class SumServerNode : public rclcpp::Node
{
public:
    SumServerNode() : Node("sum_server_node")
    {
        server_ = this->create_service<example_interfaces::srv::AddTwoInts>(
            "sum_service", std::bind(&SumServerNode::SumServiceCallback, this, _1, _2));

        RCLCPP_INFO(this->get_logger(), "Service server has been created");
    }

private:
    void SumServiceCallback(const example_interfaces::srv::AddTwoInts::Request::SharedPtr request,
                            const example_interfaces::srv::AddTwoInts::Response::SharedPtr response)
    {
        response->sum = request->a + request->b;
        RCLCPP_INFO(this->get_logger(), "Processed response: %d + %d = %d", (int)request->a, (int)request->b,(int)response->sum);
    }
    rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr server_;
};

int main(int argc, char** argv){
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SumServerNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}