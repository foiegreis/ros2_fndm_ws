#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.msg import String

class TalkerNode(Node):
    def __init__(self):
        self.counter = 0
        super().__init__('talker_node_py')
        self.publisher_ = self.create_publisher(String, 'my_topic', 10)
        self.timer_ = self.create_timer(0.5, self.publish_callback)
        self.get_logger().info("Talker Python node has been started")
    
    def publish_callback(self):
        msg = String()
        msg.data = f'Hello {self.counter}'
        self.publisher_.publish(msg)
        self.counter += 1

def main(args = None):
    rclpy.init(args=args)
    node = TalkerNode()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__=='__name__':
    main()