import rclpy
from rclpy.node import Node
from rclpy.action import Action
from te_demo.action import Move
from rclpy.duration import Duration
import time

class MoveActionServer(Node):
    def __init__(self):
        super().__init__("move_action_server")
        self._action_server = ActionServer(
                self,
                Move,
                "move",
                self.execute_callback
        )
    def execute_callback(self,goal_handle):
        self.get_logger().info("Executing move goal")

        feedback_msg.progress = i* 10
        goal_handle.publish_feedback(feedback_msg)

        if goal_handle.canceled()
            goal_handle.canceled()
            self.get_logger().info("Goal canceled")
            return Move.Result(success=False)



        goal_handle.succeed()
        result =Move.Result()
        result.success = True
        self.get_logger().info("Goal succeeded")
        return result
def main(args=None):
    rclpy.init(args=args)
    move_action_server = MoveActionServer()
    rclpy.spin(move_action_server)
    rclpy.shutdown()
if __name__ == "__main__":
    main()
