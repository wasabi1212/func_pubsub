#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32.hpp"  
#include "func_pubsub/func_publisher.hpp"

FuncPublisher::FuncPublisher() : Node("func_publisher")
{
  publisher_ = this->create_publisher<std_msgs::msg::Int32>("func_topic", 1);

  using namespace std::chrono_literals;
  timer_ = this->create_wall_timer(1s, std::bind(&FuncPublisher::timer_callback, this));
}

void FuncPublisher::timer_callback()
{
  static int count = 0;
  auto msg = std_msgs::msg::Int32();
  msg.data = count++;
  publisher_->publish(msg);
}