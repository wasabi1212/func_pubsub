#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32.hpp"

class FuncSubscriber : public rclcpp::Node
{
public:
  FuncSubscriber();

private:
  void topic_callback(const std_msgs::msg::Int32::SharedPtr msg) const;
  rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr subscription_;
};
