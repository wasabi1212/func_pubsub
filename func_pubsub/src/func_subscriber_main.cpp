#include "rclcpp/rclcpp.hpp"
#include "func_pubsub/func_subscriber.hpp"

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<FuncSubscriber>());
  rclcpp::shutdown();
  return 0;
}
