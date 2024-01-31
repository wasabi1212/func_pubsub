#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32.hpp"

class FuncPublisher : public rclcpp::Node
{
public:
  FuncPublisher();

private:
  void timer_callback();
  rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
};
