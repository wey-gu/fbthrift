// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package module

import (
	"bytes"
	"fmt"
	"git.apache.org/thrift.git/lib/go/thrift"
)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = bytes.Equal

var GoUnusedProtection__ int;

type EmptyEnum int64
const (
)

var EmptyEnumToName = map[EmptyEnum]string {
}

var EmptyEnumToValue = map[string]EmptyEnum {
}

func (p EmptyEnum) String() string {
  if v, ok := EmptyEnumToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func EmptyEnumFromString(s string) (EmptyEnum, error) {
  if v, ok := EmptyEnumToValue[s]; ok {
    return v, nil
  }
  return EmptyEnum(0), fmt.Errorf("not a valid EmptyEnum string")
}

func EmptyEnumPtr(v EmptyEnum) *EmptyEnum { return &v }

type City int64
const (
  City_NYC City = 0
  City_MPK City = 1
  City_SEA City = 2
  City_LON City = 3
)

var CityToName = map[City]string {
  City_NYC: "NYC",
  City_MPK: "MPK",
  City_SEA: "SEA",
  City_LON: "LON",
}

var CityToValue = map[string]City {
  "NYC": City_NYC,
  "MPK": City_MPK,
  "SEA": City_SEA,
  "LON": City_LON,
}

func (p City) String() string {
  if v, ok := CityToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func CityFromString(s string) (City, error) {
  if v, ok := CityToValue[s]; ok {
    return v, nil
  }
  return City(0), fmt.Errorf("not a valid City string")
}

func CityPtr(v City) *City { return &v }

type Company int64
const (
  Company_FACEBOOK Company = 0
  Company_WHATSAPP Company = 1
  Company_OCULUS Company = 2
  Company_INSTAGRAM Company = 3
)

var CompanyToName = map[Company]string {
  Company_FACEBOOK: "FACEBOOK",
  Company_WHATSAPP: "WHATSAPP",
  Company_OCULUS: "OCULUS",
  Company_INSTAGRAM: "INSTAGRAM",
}

var CompanyToValue = map[string]Company {
  "FACEBOOK": Company_FACEBOOK,
  "WHATSAPP": Company_WHATSAPP,
  "OCULUS": Company_OCULUS,
  "INSTAGRAM": Company_INSTAGRAM,
}

func (p Company) String() string {
  if v, ok := CompanyToName[p]; ok {
    return v
  }
  return "<UNSET>"
}

func CompanyFromString(s string) (Company, error) {
  if v, ok := CompanyToValue[s]; ok {
    return v, nil
  }
  return Company(0), fmt.Errorf("not a valid Company string")
}

func CompanyPtr(v Company) *Company { return &v }

// Attributes:
//  - Weeks
//  - Title
//  - Employer
type Internship struct {
  Weeks int32 `thrift:"weeks,1,required" db:"weeks" json:"weeks"`
  Title string `thrift:"title,2" db:"title" json:"title"`
  Employer *Company `thrift:"employer,3" db:"employer" json:"employer,omitempty"`
}

func NewInternship() *Internship {
  return &Internship{}
}


func (p *Internship) GetWeeks() int32 {
  return p.Weeks
}

func (p *Internship) GetTitle() string {
  return p.Title
}
var Internship_Employer_DEFAULT Company
func (p *Internship) GetEmployer() Company {
  if !p.IsSetEmployer() {
    return Internship_Employer_DEFAULT
  }
return *p.Employer
}
func (p *Internship) IsSetEmployer() bool {
  return p.Employer != nil
}

func (p *Internship) Read(iprot thrift.TProtocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }

  var issetWeeks bool = false;

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
      issetWeeks = true
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    case 3:
      if err := p.ReadField3(iprot); err != nil {
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
  if !issetWeeks{
    return thrift.NewTProtocolExceptionWithType(thrift.INVALID_DATA, fmt.Errorf("Required field Weeks is not set"));
  }
  return nil
}

func (p *Internship)  ReadField1(iprot thrift.TProtocol) error {
  if v, err := iprot.ReadI32(); err != nil {
  return thrift.PrependError("error reading field 1: ", err)
} else {
  p.Weeks = v
}
  return nil
}

func (p *Internship)  ReadField2(iprot thrift.TProtocol) error {
  if v, err := iprot.ReadString(); err != nil {
  return thrift.PrependError("error reading field 2: ", err)
} else {
  p.Title = v
}
  return nil
}

func (p *Internship)  ReadField3(iprot thrift.TProtocol) error {
  if v, err := iprot.ReadI32(); err != nil {
  return thrift.PrependError("error reading field 3: ", err)
} else {
  temp := Company(v)
  p.Employer = &temp
}
  return nil
}

func (p *Internship) Write(oprot thrift.TProtocol) error {
  if err := oprot.WriteStructBegin("Internship"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := p.writeField3(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *Internship) writeField1(oprot thrift.TProtocol) (err error) {
  if err := oprot.WriteFieldBegin("weeks", thrift.I32, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:weeks: ", p), err) }
  if err := oprot.WriteI32(int32(p.Weeks)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.weeks (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:weeks: ", p), err) }
  return err
}

func (p *Internship) writeField2(oprot thrift.TProtocol) (err error) {
  if err := oprot.WriteFieldBegin("title", thrift.STRING, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:title: ", p), err) }
  if err := oprot.WriteString(string(p.Title)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.title (2) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:title: ", p), err) }
  return err
}

func (p *Internship) writeField3(oprot thrift.TProtocol) (err error) {
  if p.IsSetEmployer() {
    if err := oprot.WriteFieldBegin("employer", thrift.I32, 3); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field begin error 3:employer: ", p), err) }
    if err := oprot.WriteI32(int32(*p.Employer)); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T.employer (3) field write error: ", p), err) }
    if err := oprot.WriteFieldEnd(); err != nil {
      return thrift.PrependError(fmt.Sprintf("%T write field end error 3:employer: ", p), err) }
  }
  return err
}

func (p *Internship) String() string {
  if p == nil {
    return "<nil>"
  }
  return fmt.Sprintf("Internship(%+v)", *p)
}

// Attributes:
//  - City
type UnEnumStruct struct {
  City City `thrift:"city,1" db:"city" json:"city"`
}

func NewUnEnumStruct() *UnEnumStruct {
  return &UnEnumStruct{
City: -1,
}
}


func (p *UnEnumStruct) GetCity() City {
  return p.City
}
func (p *UnEnumStruct) Read(iprot thrift.TProtocol) error {
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

func (p *UnEnumStruct)  ReadField1(iprot thrift.TProtocol) error {
  if v, err := iprot.ReadI32(); err != nil {
  return thrift.PrependError("error reading field 1: ", err)
} else {
  temp := City(v)
  p.City = temp
}
  return nil
}

func (p *UnEnumStruct) Write(oprot thrift.TProtocol) error {
  if err := oprot.WriteStructBegin("UnEnumStruct"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *UnEnumStruct) writeField1(oprot thrift.TProtocol) (err error) {
  if err := oprot.WriteFieldBegin("city", thrift.I32, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:city: ", p), err) }
  if err := oprot.WriteI32(int32(p.City)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.city (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:city: ", p), err) }
  return err
}

func (p *UnEnumStruct) String() string {
  if p == nil {
    return "<nil>"
  }
  return fmt.Sprintf("UnEnumStruct(%+v)", *p)
}

// Attributes:
//  - Min
//  - Max
type Range struct {
  Min int32 `thrift:"min,1,required" db:"min" json:"min"`
  Max int32 `thrift:"max,2,required" db:"max" json:"max"`
}

func NewRange() *Range {
  return &Range{}
}


func (p *Range) GetMin() int32 {
  return p.Min
}

func (p *Range) GetMax() int32 {
  return p.Max
}
func (p *Range) Read(iprot thrift.TProtocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }

  var issetMin bool = false;
  var issetMax bool = false;

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
      issetMin = true
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
      issetMax = true
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
  if !issetMin{
    return thrift.NewTProtocolExceptionWithType(thrift.INVALID_DATA, fmt.Errorf("Required field Min is not set"));
  }
  if !issetMax{
    return thrift.NewTProtocolExceptionWithType(thrift.INVALID_DATA, fmt.Errorf("Required field Max is not set"));
  }
  return nil
}

func (p *Range)  ReadField1(iprot thrift.TProtocol) error {
  if v, err := iprot.ReadI32(); err != nil {
  return thrift.PrependError("error reading field 1: ", err)
} else {
  p.Min = v
}
  return nil
}

func (p *Range)  ReadField2(iprot thrift.TProtocol) error {
  if v, err := iprot.ReadI32(); err != nil {
  return thrift.PrependError("error reading field 2: ", err)
} else {
  p.Max = v
}
  return nil
}

func (p *Range) Write(oprot thrift.TProtocol) error {
  if err := oprot.WriteStructBegin("Range"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *Range) writeField1(oprot thrift.TProtocol) (err error) {
  if err := oprot.WriteFieldBegin("min", thrift.I32, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:min: ", p), err) }
  if err := oprot.WriteI32(int32(p.Min)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.min (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:min: ", p), err) }
  return err
}

func (p *Range) writeField2(oprot thrift.TProtocol) (err error) {
  if err := oprot.WriteFieldBegin("max", thrift.I32, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:max: ", p), err) }
  if err := oprot.WriteI32(int32(p.Max)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.max (2) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:max: ", p), err) }
  return err
}

func (p *Range) String() string {
  if p == nil {
    return "<nil>"
  }
  return fmt.Sprintf("Range(%+v)", *p)
}

