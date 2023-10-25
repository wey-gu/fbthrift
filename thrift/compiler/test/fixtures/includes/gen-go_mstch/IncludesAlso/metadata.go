// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package IncludesAlso // [[[ program thrift source path ]]]

import (
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = metadata.GoUnusedProtection__

// Primitive Thrift types
var (
    primitiveThriftType_THRIFT_STRING_TYPE = metadata.NewThriftType().SetTPrimitive(metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr())
    primitiveThriftType_THRIFT_BINARY_TYPE = metadata.NewThriftType().SetTPrimitive(metadata.ThriftPrimitiveType_THRIFT_BINARY_TYPE.Ptr())
    primitiveThriftType_THRIFT_BOOL_TYPE   = metadata.NewThriftType().SetTPrimitive(metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr())
    primitiveThriftType_THRIFT_BYTE_TYPE   = metadata.NewThriftType().SetTPrimitive(metadata.ThriftPrimitiveType_THRIFT_BYTE_TYPE.Ptr())
    primitiveThriftType_THRIFT_I16_TYPE    = metadata.NewThriftType().SetTPrimitive(metadata.ThriftPrimitiveType_THRIFT_I16_TYPE.Ptr())
    primitiveThriftType_THRIFT_I32_TYPE    = metadata.NewThriftType().SetTPrimitive(metadata.ThriftPrimitiveType_THRIFT_I32_TYPE.Ptr())
    primitiveThriftType_THRIFT_I64_TYPE    = metadata.NewThriftType().SetTPrimitive(metadata.ThriftPrimitiveType_THRIFT_I64_TYPE.Ptr())
    primitiveThriftType_THRIFT_DOUBLE_TYPE = metadata.NewThriftType().SetTPrimitive(metadata.ThriftPrimitiveType_THRIFT_DOUBLE_TYPE.Ptr())
    primitiveThriftType_THRIFT_FLOAT_TYPE  = metadata.NewThriftType().SetTPrimitive(metadata.ThriftPrimitiveType_THRIFT_FLOAT_TYPE.Ptr())
    primitiveThriftType_THRIFT_VOID_TYPE   = metadata.NewThriftType().SetTPrimitive(metadata.ThriftPrimitiveType_THRIFT_VOID_TYPE.Ptr())
)

var structMetadatas = []*metadata.ThriftStruct{
    metadata.NewThriftStruct().
    SetName("IncludesAlso.Also").
    SetIsUnion(false),
}

var exceptionMetadatas = []*metadata.ThriftException{
}

var enumMetadatas = []*metadata.ThriftEnum{
}

var serviceMetadatas = []*metadata.ThriftService{
}

// GetThriftMetadata returns complete Thrift metadata for current and imported packages.
func GetThriftMetadata() *metadata.ThriftMetadata {
    includedEnumsMetadatas := []map[string]*metadata.ThriftEnum{
        GetEnumsMetadata(),
    }
    includedStructsMetadatas := []map[string]*metadata.ThriftStruct{
        GetStructsMetadata(),
    }
    includedExceptionsMetadatas := []map[string]*metadata.ThriftException{
        GetExceptionsMetadata(),
    }
    includedServicesMetadatas := []map[string]*metadata.ThriftService{
        GetServicesMetadata(),
    }

	allEnums := make(map[string]*metadata.ThriftEnum)
	allStructs := make(map[string]*metadata.ThriftStruct)
	allExceptions := make(map[string]*metadata.ThriftException)
    allServices := make(map[string]*metadata.ThriftService)

    for _, includedEnumsMetadata := range includedEnumsMetadatas {
        for enumName, thriftEnum := range includedEnumsMetadata {
            allEnums[enumName] = thriftEnum
        }
    }
    for _, includedStructsMetadata := range includedStructsMetadatas {
        for structName, thriftStruct := range includedStructsMetadata {
            allStructs[structName] = thriftStruct
        }
    }
    for _, includedExceptionsMetadata := range includedExceptionsMetadatas {
        for exceptionName, thriftException := range includedExceptionsMetadata {
            allExceptions[exceptionName] = thriftException
        }
    }
    for _, includedServicesMetadata := range includedServicesMetadatas {
        for serviceName, thriftService := range includedServicesMetadata {
            allServices[serviceName] = thriftService
        }
    }

    return metadata.NewThriftMetadata().
        SetEnums(allEnums).
        SetStructs(allStructs).
        SetExceptions(allExceptions).
        SetServices(allServices)
}

// GetStructsMetadata returns Thrift metadata for enums in the current package.
func GetEnumsMetadata() map[string]*metadata.ThriftEnum {
    result := make(map[string]*metadata.ThriftEnum)
    for _, enumMetadata := range enumMetadatas {
        result[enumMetadata.GetName()] = enumMetadata
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for structs in the current package.
func GetStructsMetadata() map[string]*metadata.ThriftStruct {
    result := make(map[string]*metadata.ThriftStruct)
    for _, structMetadata := range structMetadatas {
        result[structMetadata.GetName()] = structMetadata
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for exceptions in the current package.
func GetExceptionsMetadata() map[string]*metadata.ThriftException {
    result := make(map[string]*metadata.ThriftException)
    for _, exceptionMetadata := range exceptionMetadatas {
        result[exceptionMetadata.GetName()] = exceptionMetadata
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for services in the current package.
func GetServicesMetadata() map[string]*metadata.ThriftService {
    result := make(map[string]*metadata.ThriftService)
    for _, serviceMetadata := range serviceMetadatas {
        result[serviceMetadata.GetName()] = serviceMetadata
    }
    return result
}
