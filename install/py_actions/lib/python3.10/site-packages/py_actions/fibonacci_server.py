#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from ros2_fndm_interface.action import Fibonacci
from rclpy.action import ActionServer
import time

class FibonacciServerNode(Node):
    def __init__(self):
        super().__init__('fibonacci_server_node')

        self.action_server_ = ActionServer(self, Fibonacci, 'fibonacci_action', execute_callback=self.execute_callback)

        self.get_logger().info('fibonacci action server has been started')
    

    def execute_callback(self, goal_handle):
        """execute the action and return the result"""

        self.get_logger().info('executing the goal')

        # get goal request value
        order = goal_handle.request.order

        # initialize sequence
        sequence_ = [0, 1]

        # process Fibonacci 
        for i in range(1, order):

            sequence_.append(sequence_[i] + sequence_[i-1])
            time.sleep(1.0)

        # set the goal state as succeeded
        goal_handle.succeed()

        # return the result
        result = Fibonacci.Result()
        result.result_sequence = sequence_
        
        return result


def main(args=None):
    rclpy.init(args=args)
    node = FibonacciServerNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=='__main__':
    main()