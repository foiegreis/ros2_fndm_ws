#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from ros2_fndm_interface.action import Fibonacci
from rclpy.action import ActionServer
from rclpy.action import CancelResponse
import time

from rclpy.executors import MultiThreadedExecutor, SingleThreadedExecutor

class FibonacciServerNode(Node):
    def __init__(self):
        super().__init__('fibonacci_server_node')

        self.action_server_ = ActionServer(self, Fibonacci, 'fibonacci_action', 
                                           execute_callback=self.execute_callback,
                                           cancel_callback=self.cancel_callback)

        self.get_logger().info('fibonacci action server has been started')


    def cancel_callback(self, cancel_request):
        """accepts or rejects a client request to cancel"""

        self.get_logger().info('received cancel request')
        return CancelResponse.ACCEPT
    

    def execute_callback(self, goal_handle):
        """execute the action and return the result"""

        self.get_logger().info(f'executing the goal ') #{goal_handle.goal_id.uuid}')

        # get goal request value
        order = goal_handle.request.order

        # initialize feedback
        feedback_msg = Fibonacci.Feedback()
        feedback_msg.partial_sequence = [0, 1]

        # process Fibonacci or cancel if a cancel request is received
        for i in range(1, order):

            self.get_logger().info(str(goal_handle.is_cancel_requested))

            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Goal canceled')
                
                return Fibonacci.Result()

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

    executor = MultiThreadedExecutor()
    executor.add_node(node)

    try:
        executor.spin()
    except KeyboardInterrupt:
        print('KeyBoardInterrupt')


if __name__=='__main__':
    main()