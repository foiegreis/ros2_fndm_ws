#!/usr/bin/env python3

import rclpy
from rclpy.node import Node


class SimpleNode(Node):
    def __init__(self):
        super().__init__('simple_node_py')
        self.get_logger().info("Simple Python Node has been created")
        hz = 0.2 #period = 1/0.2 = 5 seconds
        timer_ = self.create_timer(1/hz, self.timer_callback) 

    def timer_callback(self):
        self.get_logger().info("Hello from node")

def main(args=None):
    rclpy.init(args=args)
    node = SimpleNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=='__main__':
    main()



    