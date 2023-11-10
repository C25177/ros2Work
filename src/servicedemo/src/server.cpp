#include <rclcpp/rclcpp.hpp>
#include <interfaces/srv/add_two_int.hpp>

class Server : public rclcpp::Node {
  private:
    rclcpp::Service<interfaces::srv::AddTwoInt>::SharedPtr server;
    void receiveHandler(const std::shared_ptr<interfaces::srv::AddTwoInt::Request> request, const std::shared_ptr<interfaces::srv::AddTwoInt::Response> response) {
      response->sum = request->a + request->b;
      RCLCPP_INFO(this->get_logger(), "%d + %d = %d", request->a, request->b, response->sum);
    }    

  public:
    Server(std::string name) : Node(name) {
      server = this->create_service<interfaces::srv::AddTwoInt>("add", std::bind(&Server::receiveHandler, this, std::placeholders::_1, std::placeholders::_2));
      RCLCPP_INFO(this->get_logger(), "service has been running");
    }
};


int main(int argc, char const** argv)
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Server>("server");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
