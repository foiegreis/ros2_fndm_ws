#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class TalkerNode(Node):
    def __init__(self):
        self.counter = 0
        super().__init__('severity_levels_node')
        self.publisher_ = self.create_publisher(String, 'my_topic', 10)

        self.get_logger().info("This is the INFO logging")

        self.get_logger().debug("This is the DEBUG logging")

        self.get_logger().warning("This is the WARNING logging")

        self.get_logger().error("This is the ERROR logging")

        self.get_logger().fatal("This is the FATAL logging")



def main(args = None):
    rclpy.init(args=args)
    node = TalkerNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=='__name__':
    main()