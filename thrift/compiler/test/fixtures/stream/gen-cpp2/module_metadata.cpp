/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/stream/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {
namespace md {
using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;
using ThriftService = ::apache::thrift::metadata::ThriftService;
using ThriftServiceContext = ::apache::thrift::metadata::ThriftServiceContext;
using ThriftFunctionGenerator = void (*)(ThriftMetadata&, ThriftService&);


void StructMetadata<::cpp2::FooEx>::gen(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.FooEx", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_FooEx = res.first->second;
  module_FooEx.name = "module.FooEx";
  module_FooEx.is_union = false;
}

void ExceptionMetadata<::cpp2::FooEx>::gen(ThriftMetadata& metadata) {
  auto res = metadata.exceptions.emplace("module.FooEx", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_FooEx = res.first->second;
  module_FooEx.name = "module.FooEx";
}
void ServiceMetadata<::cpp2::PubSubStreamingServiceSvIf>::gen_returnstream(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "returnstream";
  auto func_ret_type = std::make_unique<Stream>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE));
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_PubSubStreamingService_returnstream_i32_from_1;
  module_PubSubStreamingService_returnstream_i32_from_1.id = 1;
  module_PubSubStreamingService_returnstream_i32_from_1.name = "i32_from";
  module_PubSubStreamingService_returnstream_i32_from_1.is_optional = false;
  auto module_PubSubStreamingService_returnstream_i32_from_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE);
  module_PubSubStreamingService_returnstream_i32_from_1_type->writeAndGenType(module_PubSubStreamingService_returnstream_i32_from_1.type, metadata);
  func.arguments.push_back(std::move(module_PubSubStreamingService_returnstream_i32_from_1));
  ::apache::thrift::metadata::ThriftField module_PubSubStreamingService_returnstream_i32_to_2;
  module_PubSubStreamingService_returnstream_i32_to_2.id = 2;
  module_PubSubStreamingService_returnstream_i32_to_2.name = "i32_to";
  module_PubSubStreamingService_returnstream_i32_to_2.is_optional = false;
  auto module_PubSubStreamingService_returnstream_i32_to_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE);
  module_PubSubStreamingService_returnstream_i32_to_2_type->writeAndGenType(module_PubSubStreamingService_returnstream_i32_to_2.type, metadata);
  func.arguments.push_back(std::move(module_PubSubStreamingService_returnstream_i32_to_2));
  func.is_oneway_ref() = false;
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::PubSubStreamingServiceSvIf>::gen_streamthrows(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "streamthrows";
  auto func_ret_type = std::make_unique<Stream>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE));
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_PubSubStreamingService_streamthrows_foo_1;
  module_PubSubStreamingService_streamthrows_foo_1.id = 1;
  module_PubSubStreamingService_streamthrows_foo_1.name = "foo";
  module_PubSubStreamingService_streamthrows_foo_1.is_optional = false;
  auto module_PubSubStreamingService_streamthrows_foo_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE);
  module_PubSubStreamingService_streamthrows_foo_1_type->writeAndGenType(module_PubSubStreamingService_streamthrows_foo_1.type, metadata);
  func.arguments.push_back(std::move(module_PubSubStreamingService_streamthrows_foo_1));
  func.is_oneway_ref() = false;
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::PubSubStreamingServiceSvIf>::gen_boththrows(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "boththrows";
  auto func_ret_type = std::make_unique<Stream>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE));
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_PubSubStreamingService_boththrows_foo_1;
  module_PubSubStreamingService_boththrows_foo_1.id = 1;
  module_PubSubStreamingService_boththrows_foo_1.name = "foo";
  module_PubSubStreamingService_boththrows_foo_1.is_optional = false;
  auto module_PubSubStreamingService_boththrows_foo_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE);
  module_PubSubStreamingService_boththrows_foo_1_type->writeAndGenType(module_PubSubStreamingService_boththrows_foo_1.type, metadata);
  func.arguments.push_back(std::move(module_PubSubStreamingService_boththrows_foo_1));
  ::apache::thrift::metadata::ThriftField module_PubSubStreamingService_boththrows_e_1;
  module_PubSubStreamingService_boththrows_e_1.id = 1;
  module_PubSubStreamingService_boththrows_e_1.name = "e";
  module_PubSubStreamingService_boththrows_e_1.is_optional = false;
  auto module_PubSubStreamingService_boththrows_e_1_type = std::make_unique<Struct< ::cpp2::FooEx>>("module.FooEx");
  module_PubSubStreamingService_boththrows_e_1_type->writeAndGenType(module_PubSubStreamingService_boththrows_e_1.type, metadata);
  func.exceptions.push_back(std::move(module_PubSubStreamingService_boththrows_e_1));
  ExceptionMetadata< ::cpp2::FooEx>::gen(metadata);
  func.is_oneway_ref() = false;
  service.functions.push_back(std::move(func));
}
void ServiceMetadata<::cpp2::PubSubStreamingServiceSvIf>::gen_responseandstreamthrows(ThriftMetadata& metadata, ThriftService& service) {
  ::apache::thrift::metadata::ThriftFunction func;
  (void)metadata;
  func.name = "responseandstreamthrows";
  auto func_ret_type = std::make_unique<Stream>(std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE));
  func_ret_type->writeAndGenType(*func.return_type_ref(), metadata);
  ::apache::thrift::metadata::ThriftField module_PubSubStreamingService_responseandstreamthrows_foo_1;
  module_PubSubStreamingService_responseandstreamthrows_foo_1.id = 1;
  module_PubSubStreamingService_responseandstreamthrows_foo_1.name = "foo";
  module_PubSubStreamingService_responseandstreamthrows_foo_1.is_optional = false;
  auto module_PubSubStreamingService_responseandstreamthrows_foo_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::THRIFT_I32_TYPE);
  module_PubSubStreamingService_responseandstreamthrows_foo_1_type->writeAndGenType(module_PubSubStreamingService_responseandstreamthrows_foo_1.type, metadata);
  func.arguments.push_back(std::move(module_PubSubStreamingService_responseandstreamthrows_foo_1));
  ::apache::thrift::metadata::ThriftField module_PubSubStreamingService_responseandstreamthrows_e_1;
  module_PubSubStreamingService_responseandstreamthrows_e_1.id = 1;
  module_PubSubStreamingService_responseandstreamthrows_e_1.name = "e";
  module_PubSubStreamingService_responseandstreamthrows_e_1.is_optional = false;
  auto module_PubSubStreamingService_responseandstreamthrows_e_1_type = std::make_unique<Struct< ::cpp2::FooEx>>("module.FooEx");
  module_PubSubStreamingService_responseandstreamthrows_e_1_type->writeAndGenType(module_PubSubStreamingService_responseandstreamthrows_e_1.type, metadata);
  func.exceptions.push_back(std::move(module_PubSubStreamingService_responseandstreamthrows_e_1));
  ExceptionMetadata< ::cpp2::FooEx>::gen(metadata);
  func.is_oneway_ref() = false;
  service.functions.push_back(std::move(func));
}

void ServiceMetadata<::cpp2::PubSubStreamingServiceSvIf>::gen(ThriftMetadata& metadata, ThriftServiceContext& context) {
  (void) metadata;
  ::apache::thrift::metadata::ThriftService module_PubSubStreamingService;
  module_PubSubStreamingService.name = "module.PubSubStreamingService";
  static const ThriftFunctionGenerator functions[] = {
    ServiceMetadata<::cpp2::PubSubStreamingServiceSvIf>::gen_returnstream,
    ServiceMetadata<::cpp2::PubSubStreamingServiceSvIf>::gen_streamthrows,
    ServiceMetadata<::cpp2::PubSubStreamingServiceSvIf>::gen_boththrows,
    ServiceMetadata<::cpp2::PubSubStreamingServiceSvIf>::gen_responseandstreamthrows,
  };
  for (auto& function_gen : functions) {
    function_gen(metadata, module_PubSubStreamingService);
  }
  context.service_info_ref() = std::move(module_PubSubStreamingService);
  ::apache::thrift::metadata::ThriftModuleContext module;
  module.name_ref() = "module";
  context.module_ref() = std::move(module);
}
} // namespace md
} // namespace detail
} // namespace thrift
} // namespace apache
