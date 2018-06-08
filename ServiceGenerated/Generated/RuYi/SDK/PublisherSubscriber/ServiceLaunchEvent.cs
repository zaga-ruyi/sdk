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
using Thrift.Protocol;
using Thrift.Transport;

namespace Ruyi.SDK.PublisherSubscriber
{

  /// <summary>
  /// The event will be fired when service state changed.
  /// </summary>
  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class ServiceLaunchEvent : TBase
  {
    private int _EventType;
    private string _LastServiceID;

    /// <summary>
    /// The event type.
    /// </summary>
    public int EventType
    {
      get
      {
        return _EventType;
      }
      set
      {
        __isset.EventType = true;
        this._EventType = value;
      }
    }

    /// <summary>
    /// The last service that cause the state change.
    /// </summary>
    public string LastServiceID
    {
      get
      {
        return _LastServiceID;
      }
      set
      {
        __isset.LastServiceID = true;
        this._LastServiceID = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool EventType;
      public bool LastServiceID;
    }

    public ServiceLaunchEvent() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.I32) {
                EventType = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 2:
              if (field.Type == TType.String) {
                LastServiceID = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("ServiceLaunchEvent");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (__isset.EventType) {
          field.Name = "EventType";
          field.Type = TType.I32;
          field.ID = 1;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(EventType);
          oprot.WriteFieldEnd();
        }
        if (LastServiceID != null && __isset.LastServiceID) {
          field.Name = "LastServiceID";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(LastServiceID);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("ServiceLaunchEvent(");
      bool __first = true;
      if (__isset.EventType) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("EventType: ");
        __sb.Append(EventType);
      }
      if (LastServiceID != null && __isset.LastServiceID) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("LastServiceID: ");
        __sb.Append(LastServiceID);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }

}
