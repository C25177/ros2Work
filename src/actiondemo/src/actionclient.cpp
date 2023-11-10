#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <interfaces/action/process.hpp>

class ActionClient : public rclcpp::Node {
  private:
    rclcpp_action::Client<interfaces::action::Process>::SharedPtr client;
    void send(int num) {
      if(!client->wait_for_action_server(std::chrono::seconds(3))) {
        RCLCPP_ERROR(this->get_logger(), "false");
        return;
      }
      RCLCPP_INFO(this->get_logger(), "ok");
      interfaces::action::Process::Goal goal;
      goal.num = num;
      rclcpp_action::Client<interfaces::action::Process>::SendGoalOptions options;
      options.feedback_callback = std::bind(&ActionClient::feedback, this, std::placeholders::_1, std::placeholders::_2);
      options.goal_response_callback = std::bind(&ActionClient::goalResponse, this, std::placeholders::_1);
      options.result_callback = std::bind(&ActionClient::result, this, std::placeholders::_1);
      client->async_send_goal(goal, options);
    }
    void feedback(rclcpp_action::ClientGoalHandle<interfaces::action::Process>::SharedPtr cgh, const std::shared_ptr<const interfaces::action::Process::Feedback> fb) {
      double progress = fb->progress;
      RCLCPP_INFO(this->get_logger(), "%.2f", progress);
    }
    void goalResponse(std::shared_future<rclcpp_action::ClientGoalHandle<interfaces::action::Process>::SharedPtr> goalhandle) {
      if(!goalhandle.get()) 
        RCLCPP_INFO(this->get_logger(), "REJECTED");
      else 
        RCLCPP_INFO(this->get_logger(), "ACCEPTED");
    }
    void result(const rclcpp_action::ClientGoalHandle<interfaces::action::Process>::WrappedResult &result) {
      if(result.code == rclcpp_action::ResultCode::SUCCEEDED) {
        RCLCPP_INFO(this->get_logger(), "SUCCEED");
      }
      else if(result.code == rclcpp_action::ResultCode::CANCELED) {
        RCLCPP_INFO(this->get_logger(), "CANCELED");
      }
      else if(result.code == rclcpp_action::ResultCode::UNKNOWN) {
        RCLCPP_INFO(this->get_logger(), "UNKNOWN");
      }
      else if(result.code == rclcpp_action::ResultCode::ABORTED) {
        RCLCPP_INFO(this->get_logger(), "ABORTED");
      }
    }
  public:
    ActionClient(std::string name) : Node(name) {
      RCLCPP_INFO(this->get_logger(), "action client is running");
      client = rclcpp_action::create_client<interfaces::action::Process>(this, "getsum");
      send(10);
    }
};

int main(int argc, const char** argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ActionClient>("actionClient");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}