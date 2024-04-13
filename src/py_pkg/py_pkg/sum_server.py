#!/urs/bin/env python3

import rclpy
from rclpy.node import Node
from example_interfaces.srv import AddTwoInts

class SumServerNode(Node):
    def __init__(self):
        super().__init__("sum_server")
        self.server_ = self.create_service(AddTwoInts, "sum_service", self.sum_service_callback)
        self.get_logger().info("Service server Python node has been created")
    
    def sum_service_callback(self, request, response): 
        response.sum = request.a + request.b
        self.get_logger().info(f'Processed request: {request.a} + {request.b} -> {response.sum}')
        return response 


def main(args = None):
    rclpy.init(args=args)
    node = SumServerNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__=='__main__':
    main()