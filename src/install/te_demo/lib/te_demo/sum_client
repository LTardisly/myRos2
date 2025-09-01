#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import sys
import rclpy
from rclpy.node import Node
from te_demo.srv import Sum

class SumClient(Node):
    def __init__(self):
        super().__init__('sum_client')
        self.cli = self.create_client(Sum, 'calc_sum')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('waiting for service [/calc_sum] ...')

    def call(self, aa: float, bb: float, timeout: float = 3.0) -> float:
        req = Sum.Request()
        req.aa = float(aa)
        req.bb = float(bb)
        future = self.cli.call_async(req)
        rclpy.spin_until_future_complete(self, future, timeout_sec=timeout)
        if not future.done():
            raise TimeoutError(f'等待服务响应超时（{timeout}s）')
        if future.exception():
            raise RuntimeError(f'服务调用失败：{future.exception()!r}')
        return float(future.result().cc)

def main():
    rclpy.init()
    if len(sys.argv) != 3:
        print('用法: ros2 run te_demo sum_client <aa> <bb>')
        rclpy.shutdown()
        return
    aa = float(sys.argv[1]); bb = float(sys.argv[2])
    node = SumClient()
    try:
        cc = node.call(aa, bb)
        node.get_logger().info(f'aa={aa}, bb={bb} -> cc={cc}')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()

