#!/usr/bin/env python3
#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import rclpy
from rclpy.node import Node
from te_demo.srv import Add  # 由你的 Add.srv 生成

class AreaServer(Node):
    def __init__(self):
        super().__init__('area_server')
        # 服务名可按需修改，比如 'calc_area'
        self.srv = self.create_service(Add, 'cal', self.handle_calc_area)
        self.get_logger().info('Service [/calc_area] is ready.')

    def handle_calc_area(self, request: Add.Request, response: Add.Response):
        length = float(request.length)
        width = float(request.width)
        area = length * width
        response.area = area
        self.get_logger().info(f'Req: length={length:.4f}, width={width:.4f} -> area={area:.4f}')
        return response

def main():
    rclpy.init()
    node = AreaServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
