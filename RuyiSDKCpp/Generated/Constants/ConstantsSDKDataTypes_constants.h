/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef ConstantsSDKDataTypes_CONSTANTS_H
#define ConstantsSDKDataTypes_CONSTANTS_H

#include "ConstantsSDKDataTypes_types.h"

namespace Ruyi { namespace SDK { namespace Constants {

class ConstantsSDKDataTypesConstants {
 public:
  ConstantsSDKDataTypesConstants();

  int32_t low_latency_socket_port;
  int32_t high_latency_socket_port;
  std::string layer0_broker_address;
  std::string layer0_publisher_in_uri;
  std::string layer0_publisher_out_uri;
  std::string setting_config_folder;
  std::string setting_system_config;
  std::string setting_system_user_config;
  std::string system_setting_version;
  std::string layer0_debugger_channel;
  std::string trc_test_channel;
  std::string debugger_publisher_in_uri;
  std::string debugger_publisher_out_uri;
  std::string broker_playback_message;
  std::string broker_power_message;
  std::vector<BraincloudServerInfo>  BraincloudServerList;
};

extern const ConstantsSDKDataTypesConstants g_ConstantsSDKDataTypes_constants;

}}} // namespace

#endif
