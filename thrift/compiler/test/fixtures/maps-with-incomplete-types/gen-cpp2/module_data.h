/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/maps-with-incomplete-types/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/maps-with-incomplete-types/gen-cpp2/module_types.h"

namespace apache { namespace thrift {

template <> struct TStructDataStorage<::apache::thrift::test::A> {
  static constexpr const std::size_t fields_size = 1;
  static const std::string_view name;
  static const std::array<std::string_view, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<std::string_view, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

template <> struct TStructDataStorage<::apache::thrift::test::B> {
  static constexpr const std::size_t fields_size = 1;
  static const std::string_view name;
  static const std::array<std::string_view, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<std::string_view, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

}} // apache::thrift
