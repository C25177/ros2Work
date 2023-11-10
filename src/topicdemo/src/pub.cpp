#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>
#include <interfaces/msg/control_msg.hpp>

class Publisher : public rclcpp::Node {
  public:
    Publisher(std::string name) : Node(name) {
      RCLCPP_INFO(this->get_logger(), "publisher is running");
      // 第一个参数表示话题名称，pub与sub必须一致
      pub = this->create_publisher<interfaces::msg::ControlMsg>("controlmsg", 10);
      timer = this->create_wall_timer(std::chrono::seconds(2), std::bind(&Publisher::send_msgs, this));
    }
  private:
    rclcpp::Publisher<interfaces::msg::ControlMsg>::SharedPtr pub;
    rclcpp::TimerBase::SharedPtr timer;
   
    void send_msgs() {
      interfaces::msg::ControlMsg txmsg;
      txmsg.num = 10;
      pub->publish(txmsg);
      RCLCPP_INFO(this->get_logger(), "publisher send: %d", txmsg.num);
    }
};

int main(int argc, const char** argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Publisher>("pub");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}