/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/default_values/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include "thrift/compiler/test/fixtures/default_values/gen-cpp2/module_types.h"

#include <thrift/lib/cpp2/gen/module_types_tcc.h>


namespace apache {
namespace thrift {
namespace detail {

template <>
struct TccStructTraits<::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct> {
  static void translateFieldName(
      std::string_view _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::facebook::thrift::compiler::test::fixtures::default_values::StructWithNoCustomDefaultValues> {
  static void translateFieldName(
      std::string_view _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};
template <>
struct TccStructTraits<::facebook::thrift::compiler::test::fixtures::default_values::StructWithCustomDefaultValues> {
  static void translateFieldName(
      std::string_view _fname,
      int16_t& fid,
      apache::thrift::protocol::TType& _ftype) noexcept;
};

} // namespace detail
} // namespace thrift
} // namespace apache

namespace facebook::thrift::compiler::test::fixtures::default_values {

template <class Protocol_>
void TrivialStruct::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_int_value:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_int_value, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _advance_failure;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

  goto _advance_failure; // Avoid compiler warnings about unused labels.
  _advance_failure:
  _readState.afterAdvanceFailure(iprot);
_loop:
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<TrivialStruct>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_int_value;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t TrivialStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("TrivialStruct");
  {
    xfer += prot_->serializedFieldSize("int_value", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_int_value);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t TrivialStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("TrivialStruct");
  {
    xfer += prot_->serializedFieldSize("int_value", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_int_value);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t TrivialStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("TrivialStruct");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "int_value", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_int_value);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void TrivialStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t TrivialStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t TrivialStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t TrivialStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void TrivialStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t TrivialStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t TrivialStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t TrivialStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


template <class Protocol_>
void StructWithNoCustomDefaultValues::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_unqualified_integer:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_unqualified_integer, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_optional_integer:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_optional_integer, _readState);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_required_integer:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_required_integer, _readState);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_STRUCT))) {
    goto _advance_failure;
  }
_readField_unqualified_struct:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::readWithContext(*iprot, this->__fbthrift_field_unqualified_struct, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(2, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_STRUCT))) {
    goto _advance_failure;
  }
_readField_optional_struct:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::readWithContext(*iprot, this->__fbthrift_field_optional_struct, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(3, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          6,
          apache::thrift::protocol::T_STRUCT))) {
    goto _advance_failure;
  }
_readField_required_struct:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::readWithContext(*iprot, this->__fbthrift_field_required_struct, _readState);
    _readState.afterSubobject(iprot);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          6,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _advance_failure;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

  goto _advance_failure; // Avoid compiler warnings about unused labels.
  _advance_failure:
  _readState.afterAdvanceFailure(iprot);
_loop:
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<StructWithNoCustomDefaultValues>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_unqualified_integer;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_optional_integer;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_required_integer;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_unqualified_struct;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_optional_struct;
      } else {
        goto _skip;
      }
    }
    case 6:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_required_struct;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t StructWithNoCustomDefaultValues::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("StructWithNoCustomDefaultValues");
  {
    xfer += prot_->serializedFieldSize("unqualified_integer", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_unqualified_integer);
  }
  if (this->__isset.get(1)) {
    xfer += prot_->serializedFieldSize("optional_integer", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_optional_integer);
  }
  {
    xfer += prot_->serializedFieldSize("required_integer", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_required_integer);
  }
  {
    xfer += prot_->serializedFieldSize("unqualified_struct", apache::thrift::protocol::T_STRUCT, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::serializedSize<false>(*prot_, this->__fbthrift_field_unqualified_struct);
  }
  if (this->__isset.get(3)) {
    xfer += prot_->serializedFieldSize("optional_struct", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::serializedSize<false>(*prot_, this->__fbthrift_field_optional_struct);
  }
  {
    xfer += prot_->serializedFieldSize("required_struct", apache::thrift::protocol::T_STRUCT, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::serializedSize<false>(*prot_, this->__fbthrift_field_required_struct);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t StructWithNoCustomDefaultValues::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("StructWithNoCustomDefaultValues");
  {
    xfer += prot_->serializedFieldSize("unqualified_integer", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_unqualified_integer);
  }
  if (this->__isset.get(1)) {
    xfer += prot_->serializedFieldSize("optional_integer", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_optional_integer);
  }
  {
    xfer += prot_->serializedFieldSize("required_integer", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_required_integer);
  }
  {
    xfer += prot_->serializedFieldSize("unqualified_struct", apache::thrift::protocol::T_STRUCT, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::serializedSize<true>(*prot_, this->__fbthrift_field_unqualified_struct);
  }
  if (this->__isset.get(3)) {
    xfer += prot_->serializedFieldSize("optional_struct", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::serializedSize<true>(*prot_, this->__fbthrift_field_optional_struct);
  }
  {
    xfer += prot_->serializedFieldSize("required_struct", apache::thrift::protocol::T_STRUCT, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::serializedSize<true>(*prot_, this->__fbthrift_field_required_struct);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t StructWithNoCustomDefaultValues::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("StructWithNoCustomDefaultValues");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "unqualified_integer", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_unqualified_integer);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.get(1)) {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 2, kPrevFieldId>(*prot_, "optional_integer", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_optional_integer);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  {
    constexpr int16_t kPrevFieldId = 2;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 3, kPrevFieldId>(*prot_, "required_integer", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_required_integer);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 3;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 4, kPrevFieldId>(*prot_, "unqualified_struct", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::write(*prot_, this->__fbthrift_field_unqualified_struct);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.get(3)) {
    constexpr int16_t kPrevFieldId = 4;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 5, kPrevFieldId>(*prot_, "optional_struct", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::write(*prot_, this->__fbthrift_field_optional_struct);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  {
    constexpr int16_t kPrevFieldId = 5;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 6, kPrevFieldId>(*prot_, "required_struct", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::write(*prot_, this->__fbthrift_field_required_struct);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void StructWithNoCustomDefaultValues::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t StructWithNoCustomDefaultValues::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t StructWithNoCustomDefaultValues::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t StructWithNoCustomDefaultValues::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void StructWithNoCustomDefaultValues::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t StructWithNoCustomDefaultValues::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t StructWithNoCustomDefaultValues::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t StructWithNoCustomDefaultValues::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


template <class Protocol_>
void StructWithCustomDefaultValues::readNoXfer(Protocol_* iprot) {
  __fbthrift_clear_terse_fields();

  apache::thrift::detail::ProtocolReaderStructReadState<Protocol_> _readState;

  _readState.readStructBegin(iprot);

  using apache::thrift::TProtocolException;


  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          0,
          1,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_unqualified_integer:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_unqualified_integer, _readState);
    
  }
 this->__isset.set(0, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          1,
          2,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_optional_integer:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_optional_integer, _readState);
    
  }
 this->__isset.set(1, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          2,
          3,
          apache::thrift::protocol::T_I32))) {
    goto _advance_failure;
  }
_readField_required_integer:
  {
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::readWithContext(*iprot, this->__fbthrift_field_required_integer, _readState);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          3,
          4,
          apache::thrift::protocol::T_STRUCT))) {
    goto _advance_failure;
  }
_readField_unqualified_struct:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::readWithContext(*iprot, this->__fbthrift_field_unqualified_struct, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(2, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          4,
          5,
          apache::thrift::protocol::T_STRUCT))) {
    goto _advance_failure;
  }
_readField_optional_struct:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::readWithContext(*iprot, this->__fbthrift_field_optional_struct, _readState);
    _readState.afterSubobject(iprot);
    
  }
 this->__isset.set(3, true);

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          5,
          6,
          apache::thrift::protocol::T_STRUCT))) {
    goto _advance_failure;
  }
_readField_required_struct:
  {
    _readState.beforeSubobject(iprot);
    ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::readWithContext(*iprot, this->__fbthrift_field_required_struct, _readState);
    _readState.afterSubobject(iprot);
    
  }

  if (UNLIKELY(!_readState.advanceToNextField(
          iprot,
          6,
          0,
          apache::thrift::protocol::T_STOP))) {
    goto _advance_failure;
  }

_end:
  _readState.readStructEnd(iprot);

  return;

  goto _advance_failure; // Avoid compiler warnings about unused labels.
  _advance_failure:
  _readState.afterAdvanceFailure(iprot);
_loop:
  if (_readState.atStop()) {
    goto _end;
  }
  if (iprot->kUsesFieldNames()) {
    _readState.template fillFieldTraitsFromName<apache::thrift::detail::TccStructTraits<StructWithCustomDefaultValues>>();
  }

  switch (_readState.fieldId) {
    case 1:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_unqualified_integer;
      } else {
        goto _skip;
      }
    }
    case 2:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_optional_integer;
      } else {
        goto _skip;
      }
    }
    case 3:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_I32))) {
        goto _readField_required_integer;
      } else {
        goto _skip;
      }
    }
    case 4:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_unqualified_struct;
      } else {
        goto _skip;
      }
    }
    case 5:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_optional_struct;
      } else {
        goto _skip;
      }
    }
    case 6:
    {
      if (LIKELY(_readState.isCompatibleWithType(iprot, apache::thrift::protocol::T_STRUCT))) {
        goto _readField_required_struct;
      } else {
        goto _skip;
      }
    }
    default:
    {
_skip:
      _readState.skip(iprot);
      _readState.readFieldEnd(iprot);
      _readState.readFieldBeginNoInline(iprot);
      goto _loop;
    }
  }
}

template <class Protocol_>
uint32_t StructWithCustomDefaultValues::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("StructWithCustomDefaultValues");
  {
    xfer += prot_->serializedFieldSize("unqualified_integer", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_unqualified_integer);
  }
  if (this->__isset.get(1)) {
    xfer += prot_->serializedFieldSize("optional_integer", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_optional_integer);
  }
  {
    xfer += prot_->serializedFieldSize("required_integer", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_required_integer);
  }
  {
    xfer += prot_->serializedFieldSize("unqualified_struct", apache::thrift::protocol::T_STRUCT, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::serializedSize<false>(*prot_, this->__fbthrift_field_unqualified_struct);
  }
  if (this->__isset.get(3)) {
    xfer += prot_->serializedFieldSize("optional_struct", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::serializedSize<false>(*prot_, this->__fbthrift_field_optional_struct);
  }
  {
    xfer += prot_->serializedFieldSize("required_struct", apache::thrift::protocol::T_STRUCT, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::serializedSize<false>(*prot_, this->__fbthrift_field_required_struct);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t StructWithCustomDefaultValues::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("StructWithCustomDefaultValues");
  {
    xfer += prot_->serializedFieldSize("unqualified_integer", apache::thrift::protocol::T_I32, 1);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_unqualified_integer);
  }
  if (this->__isset.get(1)) {
    xfer += prot_->serializedFieldSize("optional_integer", apache::thrift::protocol::T_I32, 2);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_optional_integer);
  }
  {
    xfer += prot_->serializedFieldSize("required_integer", apache::thrift::protocol::T_I32, 3);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::serializedSize<false>(*prot_, this->__fbthrift_field_required_integer);
  }
  {
    xfer += prot_->serializedFieldSize("unqualified_struct", apache::thrift::protocol::T_STRUCT, 4);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::serializedSize<true>(*prot_, this->__fbthrift_field_unqualified_struct);
  }
  if (this->__isset.get(3)) {
    xfer += prot_->serializedFieldSize("optional_struct", apache::thrift::protocol::T_STRUCT, 5);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::serializedSize<true>(*prot_, this->__fbthrift_field_optional_struct);
  }
  {
    xfer += prot_->serializedFieldSize("required_struct", apache::thrift::protocol::T_STRUCT, 6);
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::serializedSize<true>(*prot_, this->__fbthrift_field_required_struct);
  }
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t StructWithCustomDefaultValues::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("StructWithCustomDefaultValues");
  bool previousFieldHasValue = true;
  {
    constexpr int16_t kPrevFieldId = 0;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 1, kPrevFieldId>(*prot_, "unqualified_integer", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_unqualified_integer);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.get(1)) {
    constexpr int16_t kPrevFieldId = 1;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 2, kPrevFieldId>(*prot_, "optional_integer", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_optional_integer);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  {
    constexpr int16_t kPrevFieldId = 2;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_I32, 3, kPrevFieldId>(*prot_, "required_integer", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::integral, ::std::int32_t>::write(*prot_, this->__fbthrift_field_required_integer);
    xfer += prot_->writeFieldEnd();
  }
  {
    constexpr int16_t kPrevFieldId = 3;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 4, kPrevFieldId>(*prot_, "unqualified_struct", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::write(*prot_, this->__fbthrift_field_unqualified_struct);
    xfer += prot_->writeFieldEnd();
  }
  if (this->__isset.get(3)) {
    constexpr int16_t kPrevFieldId = 4;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 5, kPrevFieldId>(*prot_, "optional_struct", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::write(*prot_, this->__fbthrift_field_optional_struct);
    xfer += prot_->writeFieldEnd();
  } else {
    previousFieldHasValue = false;
  }
  {
    constexpr int16_t kPrevFieldId = 5;
    xfer += ::apache::thrift::detail::writeFieldBegin<apache::thrift::protocol::T_STRUCT, 6, kPrevFieldId>(*prot_, "required_struct", previousFieldHasValue);
    previousFieldHasValue = true;
    xfer += ::apache::thrift::detail::pm::protocol_methods<::apache::thrift::type_class::structure, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::write(*prot_, this->__fbthrift_field_required_struct);
    xfer += prot_->writeFieldEnd();
  }
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

extern template void StructWithCustomDefaultValues::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t StructWithCustomDefaultValues::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t StructWithCustomDefaultValues::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t StructWithCustomDefaultValues::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void StructWithCustomDefaultValues::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t StructWithCustomDefaultValues::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t StructWithCustomDefaultValues::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t StructWithCustomDefaultValues::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace facebook::thrift::compiler::test::fixtures::default_values
