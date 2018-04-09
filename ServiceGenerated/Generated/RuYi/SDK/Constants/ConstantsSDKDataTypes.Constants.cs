/**
 * Autogenerated by Thrift Compiler (0.10.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.IO;
using System.Threading.Tasks;
using Thrift;
using Thrift.Collections;
using System.Runtime.Serialization;

namespace Ruyi.SDK.Constants
{
  public static class ConstantsSDKDataTypesConstants
  {
    public const int low_latency_socket_port = 11290;
    public const int high_latency_socket_port = 11390;
    public const string layer0_broker_address = "inproc://{addr}:5555";
    public const string layer0_publisher_in_uri = "tcp://{addr}:5567";
    public const string layer0_publisher_out_uri = "tcp://{addr}:5568";
    public const string setting_config_folder = "/ruyilocalroot/resources/configs/";
    public const string setting_system_config = "/ruyilocalroot/resources/configs/systemsetting";
    public const string setting_system_user_config = "/ruyilocalroot/resources/configs/usersetting";
    public const string system_setting_version = "1.0.0.1";
    public const string layer0_debugger_channel = "layer0_debugger_channel";
    public const string trc_test_channel = "trc_test_channel";
    public const string debugger_publisher_in_uri = "tcp://{addr}:8867";
    public const string debugger_publisher_out_uri = "tcp://{addr}:8868";
    public const string broker_playback_message = "mmi.developer.playback";
    public const string broker_power_message = "mmi.power.operation";
    public static List<BraincloudServerInfo> BraincloudServerList = new List<BraincloudServerInfo>();
    static ConstantsSDKDataTypesConstants()
    {
      BraincloudServerInfo tmp0 = new BraincloudServerInfo();
      tmp0.Name = "external";
      tmp0.UrlRoot = "";
      tmp0.AppId = "11498";
      tmp0.SecretKey = "5f73bb67-2b82-444a-8801-e2bb8b09e917";
      tmp0.Dispatcher = "";
      tmp0.AppVersion = "1.0.0";
      BraincloudServerList.Add(tmp0);
      BraincloudServerInfo tmp1 = new BraincloudServerInfo();
      tmp1.AppVersion = "1.0.0";
      tmp1.Dispatcher = "dispatcherv2";
      tmp1.Name = "braincloudunittestuse";
      tmp1.AppId = "30002";
      tmp1.UrlRoot = "https://braincloud:4443/";
      tmp1.SecretKey = "1b057efd-4ce5-4245-b076-caba21972e5c";
      BraincloudServerList.Add(tmp1);
      BraincloudServerInfo tmp2 = new BraincloudServerInfo();
      tmp2.SecretKey = "f75514d5-10bf-4e10-8701-2b9e16356d3f";
      tmp2.Name = "internalray";
      tmp2.UrlRoot = "";
      tmp2.Dispatcher = "";
      tmp2.AppId = "11782";
      tmp2.AppVersion = "1.0.0";
      BraincloudServerList.Add(tmp2);
      BraincloudServerInfo tmp3 = new BraincloudServerInfo();
      tmp3.Dispatcher = "dispatcherv2";
      tmp3.Name = "localhost";
      tmp3.UrlRoot = "https://localhost:8443/";
      tmp3.SecretKey = "655a2914-be71-495b-868f-68f6b4f6dfb1";
      tmp3.AppVersion = "1.0.0";
      tmp3.AppId = "30001";
      tmp3.AppVersion = "1.0.0";
      tmp3.Dispatcher = "dispatcherv2";
      tmp3.SecretKey = "42522d96-3c4f-4ccc-9545-84b89eb93e35";
      tmp3.AppVersion = "1.0.0";
      BraincloudServerList.Add(tmp3);
    }
  }
}
