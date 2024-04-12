#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
using std::placeholders::_1;

class ListenerNode : public rclcpp::Node
{
public:
    ListenerNode() : Node("listener_cpp")
    {
        subscriber_ = this->create_subscription<std_msgs::msg::String>(
            "my_topic", 10, std::bind(&ListenerNode::listener_callback, this, _1));
        
    }
private:
    void listener_callback(const std_msgs::msg::String & msg) const
    {
        RCLCPP_INFO(this->get_logger(), "The message is '%s': ", msg.data.c_str());
    }

    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriber_;
};

int main(int argc, char **argv){

    rclcpp::init(argc, argv);
    auto node = std::make_shared<ListenerNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}