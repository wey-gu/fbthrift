/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/default_values/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/default_values/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/default_values/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/default_values/gen-cpp2/module_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace facebook::thrift::compiler::test::fixtures::default_values {

const char* TrivialStruct::__fbthrift_thrift_uri() {
  return "facebook.com/thrift/compiler/test/fixtures/default_values/TrivialStruct";
}

std::string_view TrivialStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<TrivialStruct>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view TrivialStruct::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<TrivialStruct>::name;
}


TrivialStruct::TrivialStruct(apache::thrift::FragileConstructor, ::std::int32_t int_value__arg) :
    __fbthrift_field_int_value(std::move(int_value__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void TrivialStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_int_value = ::std::int32_t();
  __isset = {};
}

void TrivialStruct::__fbthrift_clear_terse_fields() {
}

bool TrivialStruct::__fbthrift_is_empty() const {
  return false;
}

bool TrivialStruct::operator==([[maybe_unused]] const TrivialStruct& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool TrivialStruct::operator<([[maybe_unused]] const TrivialStruct& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap([[maybe_unused]] TrivialStruct& a, [[maybe_unused]] TrivialStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_int_value, b.__fbthrift_field_int_value);
  swap(a.__isset, b.__isset);
}

template void TrivialStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t TrivialStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t TrivialStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t TrivialStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void TrivialStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t TrivialStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t TrivialStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t TrivialStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // namespace facebook::thrift::compiler::test::fixtures::default_values

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::facebook::thrift::compiler::test::fixtures::default_values::StructWithNoCustomDefaultValues>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::facebook::thrift::compiler::test::fixtures::default_values::StructWithNoCustomDefaultValues>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace facebook::thrift::compiler::test::fixtures::default_values {

const char* StructWithNoCustomDefaultValues::__fbthrift_thrift_uri() {
  return "facebook.com/thrift/compiler/test/fixtures/default_values/StructWithNoCustomDefaultValues";
}

std::string_view StructWithNoCustomDefaultValues::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<StructWithNoCustomDefaultValues>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view StructWithNoCustomDefaultValues::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<StructWithNoCustomDefaultValues>::name;
}


StructWithNoCustomDefaultValues::StructWithNoCustomDefaultValues(apache::thrift::FragileConstructor, ::std::int32_t unqualified_integer__arg, ::std::int32_t optional_integer__arg, ::std::int32_t required_integer__arg, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct unqualified_struct__arg, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct optional_struct__arg, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct required_struct__arg) :
    __fbthrift_field_unqualified_integer(std::move(unqualified_integer__arg)),
    __fbthrift_field_optional_integer(std::move(optional_integer__arg)),
    __fbthrift_field_required_integer(std::move(required_integer__arg)),
    __fbthrift_field_unqualified_struct(std::move(unqualified_struct__arg)),
    __fbthrift_field_optional_struct(std::move(optional_struct__arg)),
    __fbthrift_field_required_struct(std::move(required_struct__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
}


void StructWithNoCustomDefaultValues::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_unqualified_integer = ::std::int32_t();
  this->__fbthrift_field_optional_integer = ::std::int32_t();
  this->__fbthrift_field_required_integer = ::std::int32_t();
  ::apache::thrift::clear(this->__fbthrift_field_unqualified_struct);
  ::apache::thrift::clear(this->__fbthrift_field_optional_struct);
  ::apache::thrift::clear(this->__fbthrift_field_required_struct);
  __isset = {};
}

void StructWithNoCustomDefaultValues::__fbthrift_clear_terse_fields() {
}

bool StructWithNoCustomDefaultValues::__fbthrift_is_empty() const {
  return false;
}

bool StructWithNoCustomDefaultValues::operator==([[maybe_unused]] const StructWithNoCustomDefaultValues& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool StructWithNoCustomDefaultValues::operator<([[maybe_unused]] const StructWithNoCustomDefaultValues& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}

const ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct& StructWithNoCustomDefaultValues::get_unqualified_struct() const& {
  return __fbthrift_field_unqualified_struct;
}

::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct StructWithNoCustomDefaultValues::get_unqualified_struct() && {
  return std::move(__fbthrift_field_unqualified_struct);
}

const ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct* StructWithNoCustomDefaultValues::get_optional_struct() const& {
  return optional_struct_ref().has_value() ? std::addressof(__fbthrift_field_optional_struct) : nullptr;
}

::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct* StructWithNoCustomDefaultValues::get_optional_struct() & {
  return optional_struct_ref().has_value() ? std::addressof(__fbthrift_field_optional_struct) : nullptr;
}

const ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct& StructWithNoCustomDefaultValues::get_required_struct() const& {
  return __fbthrift_field_required_struct;
}

::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct StructWithNoCustomDefaultValues::get_required_struct() && {
  return std::move(__fbthrift_field_required_struct);
}


void swap([[maybe_unused]] StructWithNoCustomDefaultValues& a, [[maybe_unused]] StructWithNoCustomDefaultValues& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_unqualified_integer, b.__fbthrift_field_unqualified_integer);
  swap(a.__fbthrift_field_optional_integer, b.__fbthrift_field_optional_integer);
  swap(a.__fbthrift_field_required_integer, b.__fbthrift_field_required_integer);
  swap(a.__fbthrift_field_unqualified_struct, b.__fbthrift_field_unqualified_struct);
  swap(a.__fbthrift_field_optional_struct, b.__fbthrift_field_optional_struct);
  swap(a.__fbthrift_field_required_struct, b.__fbthrift_field_required_struct);
  swap(a.__isset, b.__isset);
}

template void StructWithNoCustomDefaultValues::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StructWithNoCustomDefaultValues::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StructWithNoCustomDefaultValues::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithNoCustomDefaultValues::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void StructWithNoCustomDefaultValues::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t StructWithNoCustomDefaultValues::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t StructWithNoCustomDefaultValues::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t StructWithNoCustomDefaultValues::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        StructWithNoCustomDefaultValues,
        ::apache::thrift::type_class::structure,
        ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        StructWithNoCustomDefaultValues,
        ::apache::thrift::type_class::structure,
        ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        StructWithNoCustomDefaultValues,
        ::apache::thrift::type_class::structure,
        ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>,
    "inconsistent use of json option");

} // namespace facebook::thrift::compiler::test::fixtures::default_values

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::facebook::thrift::compiler::test::fixtures::default_values::StructWithCustomDefaultValues>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::facebook::thrift::compiler::test::fixtures::default_values::StructWithCustomDefaultValues>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace facebook::thrift::compiler::test::fixtures::default_values {

const char* StructWithCustomDefaultValues::__fbthrift_thrift_uri() {
  return "facebook.com/thrift/compiler/test/fixtures/default_values/StructWithCustomDefaultValues";
}

std::string_view StructWithCustomDefaultValues::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<StructWithCustomDefaultValues>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view StructWithCustomDefaultValues::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<StructWithCustomDefaultValues>::name;
}


StructWithCustomDefaultValues::StructWithCustomDefaultValues(apache::thrift::FragileConstructor, ::std::int32_t unqualified_integer__arg, ::std::int32_t optional_integer__arg, ::std::int32_t required_integer__arg, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct unqualified_struct__arg, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct optional_struct__arg, ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct required_struct__arg) :
    __fbthrift_field_unqualified_integer(std::move(unqualified_integer__arg)),
    __fbthrift_field_optional_integer(std::move(optional_integer__arg)),
    __fbthrift_field_required_integer(std::move(required_integer__arg)),
    __fbthrift_field_unqualified_struct(std::move(unqualified_struct__arg)),
    __fbthrift_field_optional_struct(std::move(optional_struct__arg)),
    __fbthrift_field_required_struct(std::move(required_struct__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
}


void StructWithCustomDefaultValues::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_unqualified_integer = ::std::int32_t();
  this->__fbthrift_field_optional_integer = ::std::int32_t();
  this->__fbthrift_field_required_integer = ::std::int32_t();
  ::apache::thrift::clear(this->__fbthrift_field_unqualified_struct);
  ::apache::thrift::clear(this->__fbthrift_field_optional_struct);
  ::apache::thrift::clear(this->__fbthrift_field_required_struct);
  __isset = {};
}

void StructWithCustomDefaultValues::__fbthrift_clear_terse_fields() {
}

bool StructWithCustomDefaultValues::__fbthrift_is_empty() const {
  return false;
}

bool StructWithCustomDefaultValues::operator==([[maybe_unused]] const StructWithCustomDefaultValues& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool StructWithCustomDefaultValues::operator<([[maybe_unused]] const StructWithCustomDefaultValues& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}

const ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct& StructWithCustomDefaultValues::get_unqualified_struct() const& {
  return __fbthrift_field_unqualified_struct;
}

::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct StructWithCustomDefaultValues::get_unqualified_struct() && {
  return std::move(__fbthrift_field_unqualified_struct);
}

const ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct* StructWithCustomDefaultValues::get_optional_struct() const& {
  return optional_struct_ref().has_value() ? std::addressof(__fbthrift_field_optional_struct) : nullptr;
}

::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct* StructWithCustomDefaultValues::get_optional_struct() & {
  return optional_struct_ref().has_value() ? std::addressof(__fbthrift_field_optional_struct) : nullptr;
}

const ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct& StructWithCustomDefaultValues::get_required_struct() const& {
  return __fbthrift_field_required_struct;
}

::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct StructWithCustomDefaultValues::get_required_struct() && {
  return std::move(__fbthrift_field_required_struct);
}


void swap([[maybe_unused]] StructWithCustomDefaultValues& a, [[maybe_unused]] StructWithCustomDefaultValues& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_unqualified_integer, b.__fbthrift_field_unqualified_integer);
  swap(a.__fbthrift_field_optional_integer, b.__fbthrift_field_optional_integer);
  swap(a.__fbthrift_field_required_integer, b.__fbthrift_field_required_integer);
  swap(a.__fbthrift_field_unqualified_struct, b.__fbthrift_field_unqualified_struct);
  swap(a.__fbthrift_field_optional_struct, b.__fbthrift_field_optional_struct);
  swap(a.__fbthrift_field_required_struct, b.__fbthrift_field_required_struct);
  swap(a.__isset, b.__isset);
}

template void StructWithCustomDefaultValues::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t StructWithCustomDefaultValues::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t StructWithCustomDefaultValues::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t StructWithCustomDefaultValues::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void StructWithCustomDefaultValues::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t StructWithCustomDefaultValues::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t StructWithCustomDefaultValues::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t StructWithCustomDefaultValues::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        StructWithCustomDefaultValues,
        ::apache::thrift::type_class::structure,
        ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        StructWithCustomDefaultValues,
        ::apache::thrift::type_class::structure,
        ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        StructWithCustomDefaultValues,
        ::apache::thrift::type_class::structure,
        ::facebook::thrift::compiler::test::fixtures::default_values::TrivialStruct>,
    "inconsistent use of json option");

} // namespace facebook::thrift::compiler::test::fixtures::default_values

namespace facebook::thrift::compiler::test::fixtures::default_values { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}} // namespace facebook::thrift::compiler::test::fixtures::default_values
namespace apache::thrift::detail::annotation {
}
