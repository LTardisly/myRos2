#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rclpy
from rclpy.node import Node
from te_demo.srv import Sum

class SumServer(Node):
    def __init__(self):
        super().__init__('sum_server')
        self.srv = self.create_service(Sum, 'calc_sum', self.on_calc_sum)
        self.get_logger().info('Service [/calc_sum] is ready.')

    def on_calc_sum(self, req: Sum.Request, resp: Sum.Response):
        a = float(req.aa)
        b = float(req.bb)
        resp.cc = a + b
        self.get_logger().info(f'aa={a}, bb={b} -> cc={resp.cc}')
        return resp

def main():
    rclpy.init()
    node = SumServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
