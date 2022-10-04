#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cdef class MyUnion_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.MyUnion

    def __iter__(self):
        yield "anInteger", self.anInteger
        yield "aString", self.aString

cdef class MyField_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.MyField

    def __iter__(self):
        yield "opt_value", self.opt_value
        yield "value", self.value
        yield "req_value", self.req_value
        yield "opt_enum_value", self.opt_enum_value
        yield "enum_value", self.enum_value
        yield "req_enum_value", self.req_enum_value
        yield "opt_str_value", self.opt_str_value
        yield "str_value", self.str_value
        yield "req_str_value", self.req_str_value

cdef class MyStruct_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.MyStruct

    def __iter__(self):
        yield "opt_ref", self.opt_ref
        yield "ref", self.ref
        yield "req_ref", self.req_ref

cdef class StructWithUnion_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.StructWithUnion

    def __iter__(self):
        yield "u", self.u
        yield "aDouble", self.aDouble
        yield "f", self.f

cdef class RecursiveStruct_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.RecursiveStruct

    def __iter__(self):
        yield "mes", self.mes

cdef class StructWithContainers_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.StructWithContainers

    def __iter__(self):
        yield "list_ref", self.list_ref
        yield "set_ref", self.set_ref
        yield "map_ref", self.map_ref
        yield "list_ref_unique", self.list_ref_unique
        yield "set_ref_shared", self.set_ref_shared
        yield "list_ref_shared_const", self.list_ref_shared_const

cdef class StructWithSharedConst_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.StructWithSharedConst

    def __iter__(self):
        yield "opt_shared_const", self.opt_shared_const
        yield "shared_const", self.shared_const
        yield "req_shared_const", self.req_shared_const

cdef class Empty_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.Empty

    def __iter__(self):
        pass

cdef class StructWithRef_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.StructWithRef

    def __iter__(self):
        yield "def_field", self.def_field
        yield "opt_field", self.opt_field
        yield "req_field", self.req_field

cdef class StructWithBox_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.StructWithBox

    def __iter__(self):
        yield "a", self.a
        yield "b", self.b
        yield "c", self.c

cdef class StructWithNonOptionalBox_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.StructWithNonOptionalBox

    def __iter__(self):
        yield "a", self.a
        yield "b", self.b
        yield "c", self.c

cdef class StructWithRefTypeUnique_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.StructWithRefTypeUnique

    def __iter__(self):
        yield "def_field", self.def_field
        yield "opt_field", self.opt_field
        yield "req_field", self.req_field

cdef class StructWithRefTypeShared_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.StructWithRefTypeShared

    def __iter__(self):
        yield "def_field", self.def_field
        yield "opt_field", self.opt_field
        yield "req_field", self.req_field

cdef class StructWithRefTypeSharedConst_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.StructWithRefTypeSharedConst

    def __iter__(self):
        yield "def_field", self.def_field
        yield "opt_field", self.opt_field
        yield "req_field", self.req_field

cdef class StructWithRefAndAnnotCppNoexceptMoveCtor_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.StructWithRefAndAnnotCppNoexceptMoveCtor

    def __iter__(self):
        yield "def_field", self.def_field

cdef class StructWithString_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _module_types.StructWithString

    def __iter__(self):
        yield "def_unique_string_ref", self.def_unique_string_ref
        yield "def_shared_string_ref", self.def_shared_string_ref
        yield "def_shared_string_const_ref", self.def_shared_string_const_ref
        yield "unique_string_ref", self.unique_string_ref
        yield "shared_string_ref", self.shared_string_ref

