/*********************************************************************
 * Software License Agreement (BSD License)
 *
 *  Copyright (c) 2018, Mohamad Ayman.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * The name of Mohamad Ayman may not be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *********************************************************************/

/* Author: Mohamad Ayman */

#pragma once

// Qt
class QComboBox;
class QGroupBox;
class QLineEdit;

// SA
#include <moveit_setup_framework/qt/setup_step_widget.hpp>
#include <moveit_setup_app_plugins/perception.hpp>

namespace moveit_setup
{
namespace app
{
// ******************************************************************************************
// User Interface for setting up 3D sensor config
// ******************************************************************************************
class PerceptionWidget : public SetupStepWidget
{
  Q_OBJECT

public:
  // ******************************************************************************************
  // Public Functions
  // ******************************************************************************************

  void onInit() override;

  /// Received when this widget is chosen from the navigation menu
  void focusGiven() override;

  /// Received when another widget is chosen from the navigation menu
  bool focusLost() override;

  /// Populate the combo dropdown box with sensor plugins
  void loadSensorPluginsComboBox();

  SetupStep& getSetupStep() override
  {
    return setup_step_;
  }

  // ******************************************************************************************
  // Qt Components
  // ******************************************************************************************

  QComboBox* sensor_plugin_field_;

  // Group form for each plugin option
  QGroupBox* point_cloud_group_;
  QGroupBox* depth_map_group_;

  // Point Cloud plugin fields
  QLineEdit* point_cloud_topic_field_;
  QLineEdit* max_range_field_;
  QLineEdit* point_subsample_field_;
  QLineEdit* padding_offset_field_;
  QLineEdit* padding_scale_field_;
  QLineEdit* max_update_rate_field_;
  QLineEdit* filtered_cloud_topic_field_;

  // Depth Map plugin fields
  QLineEdit* image_topic_field_;
  QLineEdit* queue_size_field_;
  QLineEdit* near_clipping_field_;
  QLineEdit* far_clipping_field_;
  QLineEdit* shadow_threshold_field_;
  QLineEdit* depth_padding_scale_field_;
  QLineEdit* depth_padding_offset_field_;
  QLineEdit* depth_filtered_cloud_topic_field_;
  QLineEdit* depth_max_update_rate_field_;

private Q_SLOTS:

  // ******************************************************************************************
  // Slot Event Functions
  // ******************************************************************************************

  /// Called when the selected item in the sensor_plugin_field_ combobox is changed
  void sensorPluginChanged(int index);

private:
  // ******************************************************************************************
  // Variables
  // ******************************************************************************************
  Perception setup_step_;
};

}  // namespace app
}  // namespace moveit_setup
