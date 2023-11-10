#include <rclcpp/rclcpp.hpp>
#include <interfaces/srv/add_two_int.hpp>

class Client : public rclcpp::Node {
  private:
    rclcpp::Client<interfaces::srv::AddTwoInt>::SharedPtr client;
    rclcpp::TimerBase::SharedPtr timer;
    void receiveHandler(const rclcpp::Client<interfaces::srv::AddTwoInt>::SharedFuture response) {
      auto res = response.get();
      RCLCPP_INFO(this->get_logger(), "sum: %d", res->sum);
    }
    void send() {
      while(!client->wait_for_service(std::chrono::seconds(2))) {
        RCLCPP_WARN(this->get_logger(), "wait for Service...");
      }
      auto request = std::make_shared<interfaces::srv::AddTwoInt::Request>();
      request->a = 1;
      request->b = 1;
      client->async_send_request(request, std::bind(&Client::receiveHandler, this, std::placeholders::_1));
    }

  public:
    Client(std::string name) : Node(name) {
      RCLCPP_INFO(this->get_logger(), "client has been running");
      client = this->create_client<interfaces::srv::AddTwoInt>("add");
      timer = this->create_wall_timer(std::chrono::seconds(2), std::bind(&Client::send, this));
    }
};

int main(int argc, const char** argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Client>("client");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}