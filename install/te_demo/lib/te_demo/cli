#!/usr/bin/env python3
#!/usr/bin/env python3
import rclpy
import sys
from rclpy.node import Node
from te_demo.srv import Add

class client(Node):
    def __init__(self):
        super().__init__("cli")
        self.cli = self.create_client(Add,"cal")
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info("waiting for...")
    def send_request(self,length:float,width:float)->float:
        req=Add.Request()
        req.length=float(length)
        req.width=float(width)
        future=self.cli.call_async(req)
        rclpy.spin_until_future_complete(self,future)
        if future.result() is not None:
            return future.result().area
        else:
            raise RuntimeError(future.exceptin())
def main():
    rclpy.init()
    if len (sys.argv)!=3:
        print("用法：ros2 run te_demo cli <length> <width>")
        rclpy.shutdown()
        return
    length = float(sys.argv[1])
    width = float(sys.argv[2])

    node =client()
    try:
        area = node.send_request(length,width)
        node.get_logger().info(f'Area = {area:.6f} (length={length}, width={width})')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == "__main__":
    main()
