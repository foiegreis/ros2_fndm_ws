#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts
from functools import partial

class SumClientNode(Node):
    def __init__(self):
        super().__init__('sum_client_node')
        self.get_logger().info('Sum Client Python node has been created')

        #Parameters for AddTwoInts

        #ROS2 Part 6 -----------------------------------
        #a_ = 6
        #b_ = 7

        #ROS2 Part 7 ------------------------------------
        # declare parameters
        self.declare_parameter('a', 0) #default
        self.declare_parameter('b', 0) #default
        
        #get parameters
        a_ = self.get_parameter('a').value
        b_ = self.get_parameter('b').value
        #-----------------------------------
        
        self.call_sum_server(a_, b_)
    
    def call_sum_server(self, a, b):
        client = self.create_client(AddTwoInts, 'sum_service')
        while not client.wait_for_service(1.0):
            self.get_logger().info('Waiting for the Server...')

        # create request
        request = AddTwoInts.Request()
        request.a = a
        request.b = b


        #send request asynchronously
        future = client.call_async(request)
        future.add_done_callback(partial(self.sum_service_callback, a=a, b=b))

    def sum_service_callback(self, future, a, b):
        try:
            response = future.result()
            self.get_logger().info(f'{a} + {b} = {response.sum}')
        except Exception as e:
            self.get_logger().info(f'Service call failed {e}')

def main(args=None):
    rclpy.init(args=args)
    node = SumClientNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=='__main__':
    main()