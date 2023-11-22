#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <memory>
#include <random>

#include "rclcpp/rclcpp.hpp"
#include "msg_store/msg/mpu.hpp"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include <fstream>
#include <iostream>

#include "I2Cdev.h"
#include "MPU6050_6Axis_MotionApps20.h"

using namespace std::chrono_literals;

class CustomPublisher : public rclcpp::Node
{
public:
    CustomPublisher() : Node("MPU_6050_msg_publisher")
    {
        publisher_ = this->create_publisher<msg_store::msg::Mpu>("mpu_6050", 10);
        timer_ = this->create_wall_timer(200ms, std::bind(&CustomPublisher::timer_callback, this));
    }

private:
    void timer_callback()
    {
        msg_store::msg::Mpu msg;
        msg.dx = random_float(-10.0, 10.0);
        msg.dy = random_float(-10.0, 10.0);
        msg.dz = random_float(-10.0, 10.0);
        msg.dtx = random_float(-10.0, 10.0);
        msg.dty = random_float(-10.0, 10.0);
        msg.dtz = random_float(-10.0, 10.0);
        publisher_->publish(msg);
        RCLCPP_INFO(this->get_logger(), "Publishing: dx=%f, dy=%f, dz=%f, dtx=%f, dty=%f, dtz=%f", msg.dx, msg.dy, msg.dz, msg.dtx, msg.dty, msg.dtz);
    }

    float random_float(float min, float max)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<float> dis(min, max);
        return dis(gen);
    }

    rclcpp::Publisher<msg_store::msg::Mpu>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto custom_publisher = std::make_shared<CustomPublisher>();

    try
    {
        rclcpp::spin(custom_publisher);
    }
    catch (const std::exception &e)
    {
        RCLCPP_ERROR(custom_publisher->get_logger(), "Exception: %s", e.what());
    }

    rclcpp::shutdown();
    return 0;
}
