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
using System.Threading;
using System.Threading.Tasks;
using Thrift;
using Thrift.Collections;

using Thrift.Protocols;
using Thrift.Protocols.Entities;
using Thrift.Protocols.Utilities;
using Thrift.Transports;
using Thrift.Transports.Client;
using Thrift.Transports.Server;


namespace Ruyi.SDK.InputManager
{

  public partial class InputDeviceStateChangedGamepad : TBase
  {
    private int _RawOffset;
    private int _Value;
    private int _Timestamp;
    private int _Sequence;
    private short _Offset;

    public int RawOffset
    {
      get
      {
        return _RawOffset;
      }
      set
      {
        __isset.RawOffset = true;
        this._RawOffset = value;
      }
    }

    public int Value
    {
      get
      {
        return _Value;
      }
      set
      {
        __isset.@Value = true;
        this._Value = value;
      }
    }

    public int Timestamp
    {
      get
      {
        return _Timestamp;
      }
      set
      {
        __isset.Timestamp = true;
        this._Timestamp = value;
      }
    }

    public int Sequence
    {
      get
      {
        return _Sequence;
      }
      set
      {
        __isset.Sequence = true;
        this._Sequence = value;
      }
    }

    public short Offset
    {
      get
      {
        return _Offset;
      }
      set
      {
        __isset.Offset = true;
        this._Offset = value;
      }
    }


    public Isset __isset;
    public struct Isset
    {
      public bool RawOffset;
      public bool @Value;
      public bool Timestamp;
      public bool Sequence;
      public bool Offset;
    }

    public InputDeviceStateChangedGamepad()
    {
    }

    public async Task ReadAsync(TProtocol iprot, CancellationToken cancellationToken)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        await iprot.ReadStructBeginAsync(cancellationToken);
        while (true)
        {
          field = await iprot.ReadFieldBeginAsync(cancellationToken);
          if (field.Type == TType.Stop)
          {
            break;
          }

          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.I32)
              {
                RawOffset = await iprot.ReadI32Async(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 2:
              if (field.Type == TType.I32)
              {
                Value = await iprot.ReadI32Async(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 3:
              if (field.Type == TType.I32)
              {
                Timestamp = await iprot.ReadI32Async(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 4:
              if (field.Type == TType.I32)
              {
                Sequence = await iprot.ReadI32Async(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 5:
              if (field.Type == TType.I16)
              {
                Offset = await iprot.ReadI16Async(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            default: 
              await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              break;
          }

          await iprot.ReadFieldEndAsync(cancellationToken);
        }

        await iprot.ReadStructEndAsync(cancellationToken);
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public async Task WriteAsync(TProtocol oprot, CancellationToken cancellationToken)
    {
      oprot.IncrementRecursionDepth();
      try
      {
        var struc = new TStruct("InputDeviceStateChangedGamepad");
        await oprot.WriteStructBeginAsync(struc, cancellationToken);
        var field = new TField();
        if (__isset.RawOffset)
        {
          field.Name = "RawOffset";
          field.Type = TType.I32;
          field.ID = 1;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteI32Async(RawOffset, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.@Value)
        {
          field.Name = "Value";
          field.Type = TType.I32;
          field.ID = 2;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteI32Async(Value, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.Timestamp)
        {
          field.Name = "Timestamp";
          field.Type = TType.I32;
          field.ID = 3;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteI32Async(Timestamp, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.Sequence)
        {
          field.Name = "Sequence";
          field.Type = TType.I32;
          field.ID = 4;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteI32Async(Sequence, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.Offset)
        {
          field.Name = "Offset";
          field.Type = TType.I16;
          field.ID = 5;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteI16Async(Offset, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        await oprot.WriteFieldStopAsync(cancellationToken);
        await oprot.WriteStructEndAsync(cancellationToken);
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString()
    {
      var sb = new StringBuilder("InputDeviceStateChangedGamepad(");
      bool __first = true;
      if (__isset.RawOffset)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("RawOffset: ");
        sb.Append(RawOffset);
      }
      if (__isset.@Value)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Value: ");
        sb.Append(Value);
      }
      if (__isset.Timestamp)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Timestamp: ");
        sb.Append(Timestamp);
      }
      if (__isset.Sequence)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Sequence: ");
        sb.Append(Sequence);
      }
      if (__isset.Offset)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Offset: ");
        sb.Append(Offset);
      }
      sb.Append(")");
      return sb.ToString();
    }
  }

}
