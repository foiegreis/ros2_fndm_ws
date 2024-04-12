#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"
using std::placeholders::_1;

class ListenerNode : public rclcpp::Node
{
public:
    ListenerNode() : Node("listener_cpp")
    {   
        RCLCPP_INFO(this->get_logger(), "Listener C++ node has been created");

        subscriber_ = this->create_subscription<example_interfaces::msg::String>(
            "my_topic", 10, std::bind(&ListenerNode::listener_callback, this, _1));
        
    }
private:
    void listener_callback(const example_interfaces::msg::String & msg) const
    {
        RCLCPP_INFO(this->get_logger(), "The message is '%s': ", msg.data.c_str());
    }

    rclcpp::Subscription<example_interfaces::msg::String>::SharedPtr subscriber_;
};

int main(int argc, char **argv){

    rclcpp::init(argc, argv);
    auto node = std::make_shared<ListenerNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}