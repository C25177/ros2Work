#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <interfaces/action/process.hpp>

class ActionServer : public rclcpp::Node {
  private:
    rclcpp_action::Server<interfaces::action::Process>::SharedPtr server;
    // 获取目标值的中断
    rclcpp_action::GoalResponse goalHandler(const rclcpp_action::GoalUUID& uuid, std::shared_ptr<const interfaces::action::Process::Goal> goal) {
      if (goal->num <= 1) {
        RCLCPP_INFO(this->get_logger(), "must > 1");
        return rclcpp_action::GoalResponse::REJECT;
      }
      // 返回接受并且执行 也就是之后会调用acceptedHandler函数，并且在里面调用execute
      return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    }
    // 获取取消中断的中断，也就是client发生任务进程发生中断时进入这个函数
    rclcpp_action::CancelResponse cancelHandler(std::shared_ptr<rclcpp_action::ServerGoalHandle<interfaces::action::Process>> servergoalhandle) {
      RCLCPP_INFO(this->get_logger(), "canceled");
      return rclcpp_action::CancelResponse::ACCEPT;
    }
    // 执行 将接收到的服务器作为参数传入，作一些操作
    void execute(std::shared_ptr<rclcpp_action::ServerGoalHandle<interfaces::action::Process>> servergoalhandle) {
      auto feedback = std::make_shared<interfaces::action::Process::Feedback>();
      auto result = std::make_shared<interfaces::action::Process::Result>();
      int num = servergoalhandle->get_goal()->num;
      result->sum = 0;
      for(int i = 1; i <= num; i++) {
        result->sum += i;
        feedback->progress = (double) i / num;
        servergoalhandle->publish_feedback(feedback);
        if (servergoalhandle->is_canceling()) {
          RCLCPP_INFO(this->get_logger(), "canceled");
          servergoalhandle->canceled(result);
        }
      }
      servergoalhandle->succeed(result);
    }
    // 接受到目标数据时的的中断
    void acceptedHandler(std::shared_ptr<rclcpp_action::ServerGoalHandle<interfaces::action::Process>> servergoalhandle) {
      std::thread(std::bind(&ActionServer::execute, this, std::placeholders::_1), servergoalhandle).detach();
    }
  public:
    ActionServer(std::string name) : Node(name) {
      RCLCPP_INFO(this->get_logger(), "action server is running");
      server = rclcpp_action::create_server<interfaces::action::Process>(this, "getsum", 
              std::bind(&ActionServer::goalHandler, this, std::placeholders::_1, std::placeholders::_2),
              std::bind(&ActionServer::cancelHandler, this, std::placeholders::_1),
              std::bind(&ActionServer::acceptedHandler, this, std::placeholders::_1));
    }
};

int main(int argc, const char** argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<ActionServer>("actionServer");
  rclcpp::spin(node);
  rclcpp::shutdown();
 return 0;
}
