#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


class C(_fbthrift_python_types.Struct):
    i: _typing.Final[int] = ...
    def __init__(
        self, *,
        i: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        i: _typing.Optional[int]=...
    ) -> C: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int]]]: ...
    def _to_python(self) -> C: ...
    def _to_py3(self) -> "c.types.C": ...  # type: ignore
    def _to_py_deprecated(self) -> "c.ttypes.C": ...  # type: ignore


class E(_fbthrift_python_exceptions.GeneratedError):
    def __init__(
        self,
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...
    def _to_python(self) -> E: ...
    def _to_py3(self) -> "c.types.E": ...  # type: ignore
    def _to_py_deprecated(self) -> "c.ttypes.E": ...  # type: ignore