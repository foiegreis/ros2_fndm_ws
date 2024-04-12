#include "rclcpp/rclcpp.hpp"
#include <chrono>

class SimpleNode : public rclcpp::Node
{
public:
  SimpleNode(): Node("simple_node_cpp")
  {
    RCLCPP_INFO(this->get_logger(), "Simple C++ Node from cpp_py_pkg has been created");
    timer_ = this->create_wall_timer(std::chrono::milliseconds(500),std::bind(&SimpleNode::timer_callback, this)
);
  }
  private:
    void timer_callback()
    {
      RCLCPP_INFO(this->get_logger(), "Hello from node");
    }
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv){

    rclcpp::init(argc, argv);
    auto node = std::make_shared<SimpleNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}