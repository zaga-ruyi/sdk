/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.IO;
using Thrift;
using Thrift.Collections;
using System.Runtime.Serialization;

namespace Ruyi.SDK.ExternalErrors
{
  public static class ExternalErrorsSDKDataTypesConstants
  {
    public static List<ExternalErrorInfos> EXTERNALERRORLIST = new List<ExternalErrorInfos>();
    static ExternalErrorsSDKDataTypesConstants()
    {
      ExternalErrorInfos tmp0 = new ExternalErrorInfos();
      tmp0.ErrorCode = ExternalErrorCode.Err_0;
      tmp0.Description = "";
      EXTERNALERRORLIST.Add(tmp0);
      ExternalErrorInfos tmp1 = new ExternalErrorInfos();
      tmp1.Description = "setting {0} is not found!";
      tmp1.ErrorCode = ExternalErrorCode.Err_1;
      EXTERNALERRORLIST.Add(tmp1);
      ExternalErrorInfos tmp2 = new ExternalErrorInfos();
      tmp2.ErrorCode = ExternalErrorCode.Err_2;
      tmp2.Description = "[type error] trying to assign a {0} to setting item {1}, whose data type is {2}";
      EXTERNALERRORLIST.Add(tmp2);
      ExternalErrorInfos tmp3 = new ExternalErrorInfos();
      tmp3.Description = "json string convert failed: {0}";
      tmp3.ErrorCode = ExternalErrorCode.Err_3;
      EXTERNALERRORLIST.Add(tmp3);
      ExternalErrorInfos tmp4 = new ExternalErrorInfos();
      tmp4.ErrorCode = ExternalErrorCode.Err_4;
      tmp4.Description = "lambda expression error: {0}";
      EXTERNALERRORLIST.Add(tmp4);
      ExternalErrorInfos tmp5 = new ExternalErrorInfos();
      tmp5.Description = "[type error] trying to assign a {0} to setting category {1} 's property {2}, whose data type is {3}";
      tmp5.ErrorCode = ExternalErrorCode.Err_5;
      EXTERNALERRORLIST.Add(tmp5);
      ExternalErrorInfos tmp6 = new ExternalErrorInfos();
      tmp6.ErrorCode = ExternalErrorCode.Err_6;
      tmp6.Description = "currently no player logged in. please login a player first.";
      EXTERNALERRORLIST.Add(tmp6);
      ExternalErrorInfos tmp7 = new ExternalErrorInfos();
      tmp7.Description = "can not find configuration file: {0}.";
      tmp7.ErrorCode = ExternalErrorCode.Err_7;
      EXTERNALERRORLIST.Add(tmp7);
      ExternalErrorInfos tmp8 = new ExternalErrorInfos();
      tmp8.Description = "specified user {0} is not playing app {1}";
      tmp8.ErrorCode = ExternalErrorCode.Err_8;
      EXTERNALERRORLIST.Add(tmp8);
      ExternalErrorInfos tmp9 = new ExternalErrorInfos();
      tmp9.Description = "user is not found by id {0}";
      tmp9.ErrorCode = ExternalErrorCode.Err_9;
      EXTERNALERRORLIST.Add(tmp9);
      ExternalErrorInfos tmp10 = new ExternalErrorInfos();
      tmp10.Description = "";
      tmp10.ErrorCode = ExternalErrorCode.Err_10;
      EXTERNALERRORLIST.Add(tmp10);
      ExternalErrorInfos tmp11 = new ExternalErrorInfos();
      tmp11.ErrorCode = ExternalErrorCode.Err_11;
      tmp11.Description = "";
      EXTERNALERRORLIST.Add(tmp11);
      ExternalErrorInfos tmp12 = new ExternalErrorInfos();
      tmp12.Description = "";
      tmp12.ErrorCode = ExternalErrorCode.Err_12;
      EXTERNALERRORLIST.Add(tmp12);
      ExternalErrorInfos tmp13 = new ExternalErrorInfos();
      tmp13.ErrorCode = ExternalErrorCode.Err_13;
      tmp13.Description = "";
      EXTERNALERRORLIST.Add(tmp13);
      ExternalErrorInfos tmp14 = new ExternalErrorInfos();
      tmp14.ErrorCode = ExternalErrorCode.Err_14;
      tmp14.Description = "";
      EXTERNALERRORLIST.Add(tmp14);
      ExternalErrorInfos tmp15 = new ExternalErrorInfos();
      tmp15.Description = "";
      tmp15.ErrorCode = ExternalErrorCode.Err_15;
      EXTERNALERRORLIST.Add(tmp15);
      ExternalErrorInfos tmp16 = new ExternalErrorInfos();
      tmp16.ErrorCode = ExternalErrorCode.Err_16;
      tmp16.Description = "";
      EXTERNALERRORLIST.Add(tmp16);
      ExternalErrorInfos tmp17 = new ExternalErrorInfos();
      tmp17.Description = "";
      tmp17.ErrorCode = ExternalErrorCode.Err_17;
      EXTERNALERRORLIST.Add(tmp17);
      ExternalErrorInfos tmp18 = new ExternalErrorInfos();
      tmp18.ErrorCode = ExternalErrorCode.Err_18;
      tmp18.Description = "trigger action failed when changing setting {0}!";
      EXTERNALERRORLIST.Add(tmp18);
    }
  }
}
