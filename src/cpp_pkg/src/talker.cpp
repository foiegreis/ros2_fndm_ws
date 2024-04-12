#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"


class TalkerNode : public rclcpp::Node
{
public: 
    TalkerNode() : Node("talker_cpp"), count_(0)
    {
    publisher_ = this->create_publisher<std_msgs::msg::String>("my_topic", 10);

    timer_ = this->create_wall_timer(std::chrono::milliseconds(500),
                                     std::bind(&TalkerNode::talker_callback, this));
    RCLCPP_INFO(this->get_logger(), "Talker node has been created");
}
private:
    void talker_callback()
    {
        auto msg = std_msgs::msg::String();
        msg.data = std::string("Hello ") + std::to_string(count_ ++);
        publisher_->publish(msg);
    }

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    size_t count_;

};

int main(int argc, char **argv){

    rclcpp::init(argc, argv);
    auto node = std::make_shared<TalkerNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
