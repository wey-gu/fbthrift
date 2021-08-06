#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.py3.types cimport (
    cSetOp as __cSetOp,
    richcmp as __richcmp,
    set_op as __set_op,
    setcmp as __setcmp,
    list_index as __list_index,
    list_count as __list_count,
    list_slice as __list_slice,
    list_getitem as __list_getitem,
    set_iter as __set_iter,
    map_iter as __map_iter,
    map_contains as __map_contains,
    map_getitem as __map_getitem,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    const_pointer_cast,
    constant_shared_ptr,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
)
cimport thrift.py3.std_libcpp as std_libcpp
cimport thrift.py3.serializer as serializer
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins

cimport module.types_reflection as _types_reflection


cdef __EnumData __MyEnum_enum_data  = __EnumData.create(thrift.py3.types.createEnumData[cMyEnum](), MyEnum)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyEnumMeta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __MyEnum_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __MyEnum_enum_data.get_all_names()

    def __len__(cls):
        return __MyEnum_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __MyEnum_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class MyEnum(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __MyEnum_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cMyEnum].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyEnum"


__SetMetaClass(<PyTypeObject*> MyEnum, <PyTypeObject*> __MyEnumMeta)



@__cython.auto_pickle(False)
cdef class MyStructNestedAnnotation(thrift.py3.types.Struct):
    def __init__(MyStructNestedAnnotation self, **kwargs):
        self._cpp_obj = make_shared[cMyStructNestedAnnotation]()
        self._fields_setter = _fbthrift_types_fields.__MyStructNestedAnnotation_FieldsSetter.create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(MyStructNestedAnnotation self, **kwargs):
        if not kwargs:
            return self
        cdef MyStructNestedAnnotation __fbthrift_inst = MyStructNestedAnnotation.__new__(MyStructNestedAnnotation)
        __fbthrift_inst._cpp_obj = make_shared[cMyStructNestedAnnotation](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__MyStructNestedAnnotation_FieldsSetter.create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("MyStructNestedAnnotation", {
          "name": deref(self._cpp_obj).name_ref().has_value(),
        })

    @staticmethod
    cdef create(shared_ptr[cMyStructNestedAnnotation] cpp_obj):
        __fbthrift_inst = <MyStructNestedAnnotation>MyStructNestedAnnotation.__new__(MyStructNestedAnnotation)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    @property
    def name(self):

        return (<bytes>deref(self._cpp_obj).name_ref().value()).decode('UTF-8')


    def __hash__(MyStructNestedAnnotation self):
        return super().__hash__()

    def __repr__(MyStructNestedAnnotation self):
        return super().__repr__()

    def __str__(MyStructNestedAnnotation self):
        return super().__str__()


    def __copy__(MyStructNestedAnnotation self):
        cdef shared_ptr[cMyStructNestedAnnotation] cpp_obj = make_shared[cMyStructNestedAnnotation](
            deref(self._cpp_obj)
        )
        return MyStructNestedAnnotation.create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cMyStructNestedAnnotation](
            self._cpp_obj,
            (<MyStructNestedAnnotation>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyStructNestedAnnotation()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cMyStructNestedAnnotation].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyStructNestedAnnotation"

    cdef __cstring_view _fbthrift_get_field_name_by_index(self, size_t idx):
        return __get_field_name_by_index[cMyStructNestedAnnotation](idx)

    def __cinit__(self):
        self._fbthrift_struct_size = 1

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyStructNestedAnnotation self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cMyStructNestedAnnotation](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyStructNestedAnnotation self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyStructNestedAnnotation]()
        with nogil:
            needed = serializer.cdeserialize[cMyStructNestedAnnotation](buf, self._cpp_obj.get(), proto)
        return needed


@__cython.auto_pickle(False)
cdef class MyStruct(thrift.py3.types.Struct):
    def __init__(MyStruct self, **kwargs):
        self._cpp_obj = make_shared[cMyStruct]()
        self._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter.create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(MyStruct self, **kwargs):
        if not kwargs:
            return self
        cdef MyStruct __fbthrift_inst = MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj = make_shared[cMyStruct](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter.create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("MyStruct", {
          "major": deref(self._cpp_obj).major_ref().has_value(),
          "package": deref(self._cpp_obj).package_ref().has_value(),
          "annotation_with_quote": deref(self._cpp_obj).annotation_with_quote_ref().has_value(),
          "class_": deref(self._cpp_obj).class__ref().has_value(),
          "annotation_with_trailing_comma": deref(self._cpp_obj).annotation_with_trailing_comma_ref().has_value(),
          "empty_annotations": deref(self._cpp_obj).empty_annotations_ref().has_value(),
        })

    @staticmethod
    cdef create(shared_ptr[cMyStruct] cpp_obj):
        __fbthrift_inst = <MyStruct>MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    @property
    def major(self):

        return deref(self._cpp_obj).major_ref().value()

    @property
    def package(self):

        return (<bytes>deref(self._cpp_obj).package_ref().value()).decode('UTF-8')

    @property
    def annotation_with_quote(self):

        return (<bytes>deref(self._cpp_obj).annotation_with_quote_ref().value()).decode('UTF-8')

    @property
    def class_(self):

        return (<bytes>deref(self._cpp_obj).class__ref().value()).decode('UTF-8')

    @property
    def annotation_with_trailing_comma(self):

        return (<bytes>deref(self._cpp_obj).annotation_with_trailing_comma_ref().value()).decode('UTF-8')

    @property
    def empty_annotations(self):

        return (<bytes>deref(self._cpp_obj).empty_annotations_ref().value()).decode('UTF-8')


    def __hash__(MyStruct self):
        return super().__hash__()

    def __repr__(MyStruct self):
        return super().__repr__()

    def __str__(MyStruct self):
        return super().__str__()


    def __copy__(MyStruct self):
        cdef shared_ptr[cMyStruct] cpp_obj = make_shared[cMyStruct](
            deref(self._cpp_obj)
        )
        return MyStruct.create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cMyStruct](
            self._cpp_obj,
            (<MyStruct>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyStruct()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cMyStruct].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyStruct"

    cdef __cstring_view _fbthrift_get_field_name_by_index(self, size_t idx):
        return __get_field_name_by_index[cMyStruct](idx)

    def __cinit__(self):
        self._fbthrift_struct_size = 6

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyStruct self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cMyStruct](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyStruct self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyStruct]()
        with nogil:
            needed = serializer.cdeserialize[cMyStruct](buf, self._cpp_obj.get(), proto)
        return needed


@__cython.auto_pickle(False)
cdef class SecretStruct(thrift.py3.types.Struct):
    def __init__(SecretStruct self, **kwargs):
        self._cpp_obj = make_shared[cSecretStruct]()
        self._fields_setter = _fbthrift_types_fields.__SecretStruct_FieldsSetter.create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(SecretStruct self, **kwargs):
        if not kwargs:
            return self
        cdef SecretStruct __fbthrift_inst = SecretStruct.__new__(SecretStruct)
        __fbthrift_inst._cpp_obj = make_shared[cSecretStruct](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__SecretStruct_FieldsSetter.create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return thrift.py3.types._IsSet("SecretStruct", {
          "id": deref(self._cpp_obj).id_ref().has_value(),
          "password": deref(self._cpp_obj).password_ref().has_value(),
        })

    @staticmethod
    cdef create(shared_ptr[cSecretStruct] cpp_obj):
        __fbthrift_inst = <SecretStruct>SecretStruct.__new__(SecretStruct)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    @property
    def id(self):

        return deref(self._cpp_obj).id_ref().value()

    @property
    def password(self):

        return (<bytes>deref(self._cpp_obj).password_ref().value()).decode('UTF-8')


    def __hash__(SecretStruct self):
        return super().__hash__()

    def __repr__(SecretStruct self):
        return super().__repr__()

    def __str__(SecretStruct self):
        return super().__str__()


    def __copy__(SecretStruct self):
        cdef shared_ptr[cSecretStruct] cpp_obj = make_shared[cSecretStruct](
            deref(self._cpp_obj)
        )
        return SecretStruct.create(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cSecretStruct](
            self._cpp_obj,
            (<SecretStruct>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__SecretStruct()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cSecretStruct].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.SecretStruct"

    cdef __cstring_view _fbthrift_get_field_name_by_index(self, size_t idx):
        return __get_field_name_by_index[cSecretStruct](idx)

    def __cinit__(self):
        self._fbthrift_struct_size = 2

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(SecretStruct self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cSecretStruct](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(SecretStruct self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cSecretStruct]()
        with nogil:
            needed = serializer.cdeserialize[cSecretStruct](buf, self._cpp_obj.get(), proto)
        return needed


