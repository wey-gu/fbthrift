// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package go

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var GoUnusedProtection__ int;

// Attributes:
//  - Name
type Name struct {
  Name string `thrift:"name,1" db:"name" json:"name"`
}

func NewName() *Name {
  return &Name{}
}


func (p *Name) GetName() string {
  return p.Name
}
type NameBuilder struct {
  obj *Name
}

func NewNameBuilder() *NameBuilder{
  return &NameBuilder{
    obj: NewName(),
  }
}

func (p NameBuilder) Emit() *Name{
  return &Name{
    Name: p.obj.Name,
  }
}

func (n *NameBuilder) Name(name string) *NameBuilder {
  n.obj.Name = name
  return n
}

func (n *Name) SetName(name string) *Name {
  n.Name = name
  return n
}

func (p *Name) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *Name)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.Name = v
  }
  return nil
}

func (p *Name) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("Name"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *Name) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:name: ", p), err) }
  if err := oprot.WriteString(string(p.Name)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.name (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:name: ", p), err) }
  return err
}

func (p *Name) String() string {
  if p == nil {
    return "<nil>"
  }

  nameVal := fmt.Sprintf("%v", p.Name)
  return fmt.Sprintf("Name({Name:%s})", nameVal)
}

// Attributes:
//  - Tag
type Tag struct {
  Tag string `thrift:"tag,1" db:"tag" json:"tag"`
}

func NewTag() *Tag {
  return &Tag{}
}


func (p *Tag) GetTag() string {
  return p.Tag
}
type TagBuilder struct {
  obj *Tag
}

func NewTagBuilder() *TagBuilder{
  return &TagBuilder{
    obj: NewTag(),
  }
}

func (p TagBuilder) Emit() *Tag{
  return &Tag{
    Tag: p.obj.Tag,
  }
}

func (t *TagBuilder) Tag(tag string) *TagBuilder {
  t.obj.Tag = tag
  return t
}

func (t *Tag) SetTag(tag string) *Tag {
  t.Tag = tag
  return t
}

func (p *Tag) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *Tag)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.Tag = v
  }
  return nil
}

func (p *Tag) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("Tag"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *Tag) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("tag", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:tag: ", p), err) }
  if err := oprot.WriteString(string(p.Tag)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.tag (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:tag: ", p), err) }
  return err
}

func (p *Tag) String() string {
  if p == nil {
    return "<nil>"
  }

  tagVal := fmt.Sprintf("%v", p.Tag)
  return fmt.Sprintf("Tag({Tag:%s})", tagVal)
}

type NewType_ struct {
}

func NewNewType_() *NewType_ {
  return &NewType_{}
}

type NewType_Builder struct {
  obj *NewType_
}

func NewNewType_Builder() *NewType_Builder{
  return &NewType_Builder{
    obj: NewNewType_(),
  }
}

func (p NewType_Builder) Emit() *NewType_{
  return &NewType_{
  }
}

func (p *NewType_) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    if err := iprot.Skip(fieldTypeId); err != nil {
      return err
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *NewType_) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("NewType"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *NewType_) String() string {
  if p == nil {
    return "<nil>"
  }

  return fmt.Sprintf("NewType_({})")
}
