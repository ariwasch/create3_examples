// Copyright 2021 iRobot Corporation. All Rights Reserved.
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "create3_coverage/behaviors/drive-straight-behavior.hpp"
#include "utils.hpp"

namespace create3_coverage {

DriveStraightBehavior::DriveStraightBehavior(
    Config config,
    rclcpp::Publisher<TwistMsg>::SharedPtr cmd_vel_publisher,
    rclcpp::Logger logger,
    rclcpp::Clock::SharedPtr clock)
: m_cmd_vel_publisher(cmd_vel_publisher), m_logger(logger)
{
    m_clock = clock;
    m_config = config;

    m_first_run = false;
    m_start_time = m_clock->now();
}

State DriveStraightBehavior::execute(const Data & data)
{
    if (!m_first_run) {
        m_first_run = true;
        m_initial_position = data.pose.position;
    }

    double traveled_distance = get_distance(m_initial_position, data.pose.position);
    // Handle maximum traveled distance
    if (traveled_distance >= m_config.max_distance) {
        RCLCPP_INFO(m_logger, "Reached drive straight max distance: %f", traveled_distance);
        return State::SUCCESS;
    }

    bool driving_towards_dock = is_driving_towards_dock(data.opcodes);
    bool hazards_detected = is_front_hazard_active(data.hazards);
    // Pointing towards dock or found hazard
    if (driving_towards_dock || hazards_detected) {
        RCLCPP_INFO(m_logger, "Stop driving straight: traveled %f/%f: hazards %ld dock %d",
            traveled_distance, m_config.max_distance,
            data.hazards.detections.size(), driving_towards_dock);
        
        // We are going to stop moving, we consider this a success or failure depending on how much we traveled
        if (traveled_distance >= m_config.min_distance) {
            return State::SUCCESS;
        } else {
            return State::FAILURE;
        }
    }

    auto twist_msg = std::make_unique<TwistMsg>();
    twist_msg->linear.x = m_config.linear_vel;
    m_cmd_vel_publisher->publish(std::move(twist_msg));

    return State::RUNNING;
}

} // namespace create3_coverage
