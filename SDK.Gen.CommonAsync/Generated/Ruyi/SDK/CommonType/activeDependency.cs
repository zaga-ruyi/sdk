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


namespace Ruyi.SDK.CommonType
{

  public partial class activeDependency : TBase
  {
    private string _name;
    private string _condition;

    public string Name
    {
      get
      {
        return _name;
      }
      set
      {
        __isset.name = true;
        this._name = value;
      }
    }

    public string Condition
    {
      get
      {
        return _condition;
      }
      set
      {
        __isset.condition = true;
        this._condition = value;
      }
    }


    public Isset __isset;
    public struct Isset
    {
      public bool name;
      public bool condition;
    }

    public activeDependency()
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
              if (field.Type == TType.String)
              {
                Name = await iprot.ReadStringAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 2:
              if (field.Type == TType.String)
              {
                Condition = await iprot.ReadStringAsync(cancellationToken);
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
        var struc = new TStruct("activeDependency");
        await oprot.WriteStructBeginAsync(struc, cancellationToken);
        var field = new TField();
        if (Name != null && __isset.name)
        {
          field.Name = "name";
          field.Type = TType.String;
          field.ID = 1;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteStringAsync(Name, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (Condition != null && __isset.condition)
        {
          field.Name = "condition";
          field.Type = TType.String;
          field.ID = 2;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteStringAsync(Condition, cancellationToken);
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
      var sb = new StringBuilder("activeDependency(");
      bool __first = true;
      if (Name != null && __isset.name)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Name: ");
        sb.Append(Name);
      }
      if (Condition != null && __isset.condition)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Condition: ");
        sb.Append(Condition);
      }
      sb.Append(")");
      return sb.ToString();
    }
  }

}
