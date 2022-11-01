/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/adapter/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::facebook::thrift::test::MyAnnotation> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).signature_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::MyAnnotation");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::Foo> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).intField_ref());
    case 2:
      return f(1, static_cast<T&&>(t).optionalIntField_ref());
    case 3:
      return f(2, static_cast<T&&>(t).intFieldWithDefault_ref());
    case 4:
      return f(3, static_cast<T&&>(t).setField_ref());
    case 5:
      return f(4, static_cast<T&&>(t).optionalSetField_ref());
    case 6:
      return f(5, static_cast<T&&>(t).mapField_ref());
    case 7:
      return f(6, static_cast<T&&>(t).optionalMapField_ref());
    case 8:
      return f(7, static_cast<T&&>(t).binaryField_ref());
    case 9:
      return f(8, static_cast<T&&>(t).longField_ref());
    case 10:
      return f(9, static_cast<T&&>(t).adaptedLongField_ref());
    case 11:
      return f(10, static_cast<T&&>(t).doubleAdaptedField_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::Foo");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::Baz> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).intField_ref());
    case 4:
      return f(1, static_cast<T&&>(t).setField_ref());
    case 6:
      return f(2, static_cast<T&&>(t).mapField_ref());
    case 8:
      return f(3, static_cast<T&&>(t).binaryField_ref());
    case 9:
      return f(4, static_cast<T&&>(t).longField_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::Baz");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::Bar> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).structField_ref());
    case 2:
      return f(1, static_cast<T&&>(t).optionalStructField_ref());
    case 3:
      return f(2, static_cast<T&&>(t).structListField_ref());
    case 4:
      return f(3, static_cast<T&&>(t).optionalStructListField_ref());
    case 5:
      return f(4, static_cast<T&&>(t).unionField_ref());
    case 6:
      return f(5, static_cast<T&&>(t).optionalUnionField_ref());
    case 7:
      return f(6, static_cast<T&&>(t).adaptedStructField_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::Bar");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::detail::DirectlyAdapted> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::detail::DirectlyAdapted");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::detail::IndependentDirectlyAdapted> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::detail::IndependentDirectlyAdapted");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::StructWithFieldAdapter> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field_ref());
    case 2:
      return f(1, static_cast<T&&>(t).shared_field_ref());
    case 3:
      return f(2, static_cast<T&&>(t).opt_shared_field_ref());
    case 4:
      return f(3, static_cast<T&&>(t).opt_boxed_field_ref());
    case 5:
      return f(4, static_cast<T&&>(t).boxed_field_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::StructWithFieldAdapter");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::TerseAdaptedFields> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).int_field_ref());
    case 2:
      return f(1, static_cast<T&&>(t).string_field_ref());
    case 3:
      return f(2, static_cast<T&&>(t).set_field_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::TerseAdaptedFields");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::B> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).a_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::B");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::A> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::A");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::Config> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).path_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::Config");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::MyStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field_ref());
    case 2:
      return f(1, static_cast<T&&>(t).set_string_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::MyStruct");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::AdaptTestStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).delay_ref());
    case 2:
      return f(1, static_cast<T&&>(t).custom_ref());
    case 3:
      return f(2, static_cast<T&&>(t).timeout_ref());
    case 4:
      return f(3, static_cast<T&&>(t).data_ref());
    case 5:
      return f(4, static_cast<T&&>(t).meta_ref());
    case 6:
      return f(5, static_cast<T&&>(t).indirectionString_ref());
    case 7:
      return f(6, static_cast<T&&>(t).string_data_ref());
    case 8:
      return f(7, static_cast<T&&>(t).double_wrapped_bool_ref());
    case 9:
      return f(8, static_cast<T&&>(t).double_wrapped_integer_ref());
    case 10:
      return f(9, static_cast<T&&>(t).binary_data_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::AdaptTestStruct");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::AdaptTemplatedTestStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).adaptedBool_ref());
    case 2:
      return f(1, static_cast<T&&>(t).adaptedByte_ref());
    case 3:
      return f(2, static_cast<T&&>(t).adaptedShort_ref());
    case 4:
      return f(3, static_cast<T&&>(t).adaptedInteger_ref());
    case 5:
      return f(4, static_cast<T&&>(t).adaptedLong_ref());
    case 6:
      return f(5, static_cast<T&&>(t).adaptedDouble_ref());
    case 7:
      return f(6, static_cast<T&&>(t).adaptedString_ref());
    case 8:
      return f(7, static_cast<T&&>(t).adaptedList_ref());
    case 9:
      return f(8, static_cast<T&&>(t).adaptedSet_ref());
    case 10:
      return f(9, static_cast<T&&>(t).adaptedMap_ref());
    case 11:
      return f(10, static_cast<T&&>(t).adaptedBoolDefault_ref());
    case 12:
      return f(11, static_cast<T&&>(t).adaptedByteDefault_ref());
    case 13:
      return f(12, static_cast<T&&>(t).adaptedShortDefault_ref());
    case 14:
      return f(13, static_cast<T&&>(t).adaptedIntegerDefault_ref());
    case 15:
      return f(14, static_cast<T&&>(t).adaptedLongDefault_ref());
    case 16:
      return f(15, static_cast<T&&>(t).adaptedDoubleDefault_ref());
    case 17:
      return f(16, static_cast<T&&>(t).adaptedStringDefault_ref());
    case 18:
      return f(17, static_cast<T&&>(t).adaptedEnum_ref());
    case 19:
      return f(18, static_cast<T&&>(t).adaptedListDefault_ref());
    case 20:
      return f(19, static_cast<T&&>(t).adaptedSetDefault_ref());
    case 21:
      return f(20, static_cast<T&&>(t).adaptedMapDefault_ref());
    case 22:
      return f(21, static_cast<T&&>(t).doubleTypedefBool_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::AdaptTemplatedTestStruct");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::AdaptTemplatedNestedTestStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).adaptedStruct_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::AdaptTemplatedNestedTestStruct");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::ThriftAdaptTestUnion> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).delay_ref());
    case 2:
      return f(1, static_cast<T&&>(t).custom_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::ThriftAdaptTestUnion");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::ThriftAdaptedStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).data_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::ThriftAdaptedStruct");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::detail::DirectlyAdaptedStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).data_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::detail::DirectlyAdaptedStruct");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::StructFieldAdaptedStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).adaptedStruct_ref());
    case 2:
      return f(1, static_cast<T&&>(t).adaptedTypedef_ref());
    case 3:
      return f(2, static_cast<T&&>(t).directlyAdapted_ref());
    case 4:
      return f(3, static_cast<T&&>(t).typedefOfAdapted_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::StructFieldAdaptedStruct");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::CircularAdaptee> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::CircularAdaptee");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::CircularStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::CircularStruct");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::ReorderedStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).reordered_dependent_adapted_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::ReorderedStruct");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::detail::DeclaredAfterStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::detail::DeclaredAfterStruct");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::UnderlyingRenamedStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).data_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::UnderlyingRenamedStruct");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::UnderlyingSameNamespaceStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).data_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::UnderlyingSameNamespaceStruct");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::detail::HeapAllocated> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::detail::HeapAllocated");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::MoveOnly> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).ptr_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::MoveOnly");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::AlsoMoveOnly> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).ptr_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::AlsoMoveOnly");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::ApplyAdapter> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::ApplyAdapter");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::detail::TransitiveAdapted> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::detail::TransitiveAdapted");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::CountingStruct> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).regularInt_ref());
    case 2:
      return f(1, static_cast<T&&>(t).countingInt_ref());
    case 3:
      return f(2, static_cast<T&&>(t).regularString_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::CountingStruct");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::Person> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).name_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::Person");
    }
  }
};

template <>
struct VisitByFieldId<::facebook::thrift::test::Person2> {
  template <typename F, typename T>
  void operator()(FOLLY_MAYBE_UNUSED F&& f, int32_t fieldId, FOLLY_MAYBE_UNUSED T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).name_ref());
    default:
      throwInvalidThriftId(fieldId, "::facebook::thrift::test::Person2");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache
