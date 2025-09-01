import rclpy
from rclpy.node import Node
from rclpy.action import ActionClient
from te_demo.action import Move  # 导入 te_demo 包中的 Move

class MoveActionClient(Node):

    def __init__(self):
        super().__init__('move_action_client')
        self._action_client = ActionClient(self, Move, 'move')

    def send_goal(self):
        goal_msg = Move.Goal()
        goal_msg.target_pose.position.x = 5.0
        goal_msg.target_pose.position.y = 3.0

        self.get_logger().info('Sending goal')
        self._action_client.send_goal_async(goal_msg, feedback_callback=self.feedback_callback)

    def feedback_callback(self, feedback_msg):
        self.get_logger().info(f"Progress: {feedback_msg.progress}%")

def main(args=None):
    rclpy.init(args=args)
    move_action_client = MoveActionClient()
    move_action_client.send_goal()
    rclpy.spin(move_action_client)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

