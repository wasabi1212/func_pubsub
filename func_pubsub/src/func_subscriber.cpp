#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32.hpp"  
#include "func_pubsub/func_subscriber.hpp"

FuncSubscriber::FuncSubscriber() : Node("func_subscriber")
{
  using std::placeholders::_1;
  subscription_ = this->create_subscription<std_msgs::msg::Int32>("func_topic", 1,
    std::bind(&FuncSubscriber::topic_callback, this, _1));
}

void FuncSubscriber::topic_callback(const std_msgs::msg::Int32::SharedPtr msg) const
{
  RCLCPP_INFO(this->get_logger(), "%d", msg->data);
}