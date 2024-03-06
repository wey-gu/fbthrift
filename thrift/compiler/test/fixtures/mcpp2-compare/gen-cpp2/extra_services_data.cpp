/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/mcpp2-compare/src/extra_services.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

FOLLY_CLANG_DISABLE_WARNING("-Wunused-macros")

#if defined(__GNUC__) && defined(__linux__) && !FOLLY_MOBILE
// These attributes are applied to the static data members to ensure that they
// are not stripped from the compiled binary, in order to keep them available
// for use by debuggers at runtime.
//
// The "used" attribute is required to ensure the compiler always emits unused
// data.
//
// The "section" attribute is required to stop the linker from stripping used
// data. It works by forcing all of the data members (both used and unused ones)
// into the same section. As the linker strips data on a per-section basis, it
// is then unable to remove unused data without also removing used data.
// This has a similar effect to the "retain" attribute, but works with older
// toolchains.
#define THRIFT_DATA_MEMBER [[gnu::used]] [[gnu::section(".rodata.thrift.data")]]
#else
#define THRIFT_DATA_MEMBER
#endif

namespace apache {
namespace thrift {

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::extra::svc::containerStruct2>::name = "containerStruct2";
THRIFT_DATA_MEMBER const std::array<std::string_view, 13> TStructDataStorage<::extra::svc::containerStruct2>::fields_names = {{
  "fieldA"sv,
  "req_fieldA"sv,
  "opt_fieldA"sv,
  "fieldB"sv,
  "req_fieldB"sv,
  "opt_fieldB"sv,
  "fieldC"sv,
  "req_fieldC"sv,
  "opt_fieldC"sv,
  "fieldD"sv,
  "fieldE"sv,
  "req_fieldE"sv,
  "opt_fieldE"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 13> TStructDataStorage<::extra::svc::containerStruct2>::fields_ids = {{
  1,
  101,
  201,
  2,
  102,
  202,
  3,
  103,
  203,
  4,
  5,
  105,
  205,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 13> TStructDataStorage<::extra::svc::containerStruct2>::fields_types = {{
  TType::T_BOOL,
  TType::T_BOOL,
  TType::T_BOOL,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_MAP,
  TType::T_SET,
  TType::T_SET,
  TType::T_SET,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 13> TStructDataStorage<::extra::svc::containerStruct2>::storage_names = {{
  "__fbthrift_field_fieldA"sv,
  "__fbthrift_field_req_fieldA"sv,
  "__fbthrift_field_opt_fieldA"sv,
  "__fbthrift_field_fieldB"sv,
  "__fbthrift_field_req_fieldB"sv,
  "__fbthrift_field_opt_fieldB"sv,
  "__fbthrift_field_fieldC"sv,
  "__fbthrift_field_req_fieldC"sv,
  "__fbthrift_field_opt_fieldC"sv,
  "__fbthrift_field_fieldD"sv,
  "__fbthrift_field_fieldE"sv,
  "__fbthrift_field_req_fieldE"sv,
  "__fbthrift_field_opt_fieldE"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 13> TStructDataStorage<::extra::svc::containerStruct2>::isset_indexes = {{
  0,
  -1,
  1,
  2,
  -1,
  3,
  4,
  -1,
  5,
  6,
  7,
  -1,
  8,
}};

} // namespace thrift
} // namespace apache
