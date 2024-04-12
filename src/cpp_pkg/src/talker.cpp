#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/msg/string.hpp"


class TalkerNode : public rclcpp::Node
{
public: 
    TalkerNode() : Node("talker_cpp"), count_(0)
    {
    RCLCPP_INFO(this->get_logger(), "Talker C++ node has been created");

    publisher_ = this->create_publisher<example_interfaces::msg::String>("my_topic", 10);

    timer_ = this->create_wall_timer(std::chrono::milliseconds(500),
                                     std::bind(&TalkerNode::talker_callback, this));
}
private:
    void talker_callback()
    {
        auto msg = example_interfaces::msg::String();
        msg.data = std::string("Hello ") + std::to_string(count_ ++);
        publisher_->publish(msg);
    }

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<example_interfaces::msg::String>::SharedPtr publisher_;
    size_t count_;

};

int main(int argc, char **argv){

    rclcpp::init(argc, argv);
    auto node = std::make_shared<TalkerNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
