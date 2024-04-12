#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from my_ros2_interface.action import Fibonacci
from rclpy.action import ActionServer
import time

class FibonacciServerNode(Node):
    def __init__(self):
        super().__init__('fibonacci_server_node')

        self.action_server_ = ActionServer(self, Fibonacci, 'fibonacci', 
                                           execute_callback=self.execute_callback)

        self.get_logger().info('fibonacci action server has been started')
    

    def execute_callback(self, goal_handle):
        """execute the action and return the result"""

        self.get_logger().info('executing the goal')

        # get goal request value
        order = goal_handle.request.order

        # initialize feedback
        feedback_msg = Fibonacci.Feedback()
        feedback_msg.partial_sequence = [0, 1]

        # process Fibonacci 
        for i in range(1, order):

            feedback_msg.partial_sequence.append(feedback_msg.partial_sequence[i] + feedback_msg.partial_sequence[i-1])

            self.get_logger().info(f'Feedback: {feedback_msg.partial_sequence}')

            goal_handle.publish_feedback(feedback_msg)

            time.sleep(1.0)

        # set the goal state as succeeded
        goal_handle.succeed()

        # return the result
        result = Fibonacci.Result()
        result.result_sequence = feedback_msg.partial_sequence
        
        return result


def main(args=None):
    rclpy.init(args=args)
    node = FibonacciServerNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=='__main__':
    main()