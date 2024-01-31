#include "rclcpp/rclcpp.hpp"
#include "func_pubsub/func_publisher.hpp"

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<FuncPublisher>());
  rclcpp::shutdown();
  return 0;
}
