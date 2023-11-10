#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <interfaces/msg/control_msg.hpp>

class Sublisher : public rclcpp::Node {
  public:
    Sublisher(std::string name) : Node(name) {
      RCLCPP_INFO(this->get_logger(), "sub class is running");
      // 第一个参数表示话题名称，pub与sub必须一致
      sub = this->create_subscription<interfaces::msg::ControlMsg>("controlmsg", 10, std::bind(&Sublisher::receiveHandler, this, std::placeholders::_1));
    }
  
  private:
    rclcpp::Subscription<interfaces::msg::ControlMsg>::SharedPtr sub;
    void receiveHandler(interfaces::msg::ControlMsg::SharedPtr rxmsg) const {
      RCLCPP_INFO(this->get_logger(), "has received: %d", rxmsg->num);
    }
};

int main(int argc, const char** argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Sublisher>("sub");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}