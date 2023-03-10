# Interface Definition Language

<!-- https://www.internalfb.com/intern/wiki/Thrift/Thrift_Guide/IDL/IDL-Reference/?noredirect -->

This document is a reference manual for the Thrift Interface Definition Language. It defines the syntax and semantics of Thrift files and defines constraints on the behavior of the generated code and libraries. It does not fully constrain the details of the generated code and libraries - and hence allows for flexibility in this regard. These details (which must be documented separately as an implementation reference) include:

* the mapping between Thrift types and programming language types and APIs;
* serialization and deserialization strategies;
* network protocols for RPCs.

The primary audience of this reference is Thrift users who want to understand the language in more detail. The secondary audience is Thrift implementers who want to learn about constraints imposed by the language on their implementation.

## Notation

Thrift syntax is described using a [modified BNF grammar notation](https://docs.python.org/3/reference/introduction.html#notation).

As an example, consider the grammar for a binary literal:

```grammar
bin_literal ::=  "0" ("b" | "B") bin_digit+
bin_digit   ::=  "0" | "1"
```

This rule defines `bin_literal` as starting with `0`, followed by a lowercase or uppercase `B` and one or more binary digits (`0` or `1`).

## Lexical Elements

The Thrift language uses different lexical elements (tokens), such as identifiers, keywords, literals, and operators, as building blocks to define its syntax. This section describes what sequences of characters constitute valid tokens in the language.

When parsing a Thrift file, tokens are generated by selecting the longest possible substring from the input text that conforms to the constraints of the grammar (maximal munch).

The encoding of Thrift source files is UTF-8.

### Whitespace and Comments

Whitespace is used to separate tokens in source files. The following characters are considered whitespace in Thrift: space (U+0020), horizontal tab (U+0009), line feed (U+000A) and carriage return (U+000D).

Thrift supports single-line and multiline comments. Single-line comments start with `//` or `#` and continue until the end of the line which is determined as the nearest line feed (U+000A) or, if there is none, the end of file. Multiline comments start with `/*` and end with the nearest `*/`. Comments are treated as whitespace.

### Identifiers

Identifiers begin with an uppercase or lowercase letter `A` through `Z` or an underscore (`_`). Subsequent characters can also be digits `0` through `9`.

Identifiers in Thrift are case-sensitive.

```grammar
identifier  ::=  id_start id_continue*
id_start    ::=  "a"..."z" | "A"..."Z" | "_"
id_continue ::=  id_start | digit
```

A qualified identifier is a sequence of two or more identifiers separated by dots, e.g. `search_types.Query`. `maybe_qualified_id` denotes a qualified or unqualified identifier.

```grammar
maybe_qualified_id ::=  identifier ["." identifier]*
```

### Keywords

Thrift has two types of keywords: reserved words and context-sensitive keywords.
The following are reserved words in Thrift - and cannot be used as identifiers:

```thrift
binary              false               map                 struct
bool                float               namespace           throws
byte                hs_include          optional            true
const               i16                 performs            typedef
cpp_include         i32                 required            union
double              i64                 service             void
enum                include             set
exception           interaction         stream
extends             list                string
```

Context-sensitive keywords listed below can be used as identifiers:

```thrift
client              package              safe               stateful
idempotent          permanent            server             transient
oneway              readonly             sink
```

Programming languages for which code is generated by the Thrift compiler will have their own additional reserved words. Thrift implementations are permitted to disallow use of these reserved words. The implementation reference must specify how such reserved words are treated.

### Literals

A literal is a representation of a fixed value in source code. Thrift supports integer, floating-point, string and Boolean literals.

```grammar
literal ::=  int_literal | float_literal | string_literal | bool_literal

int_literal ::=  dec_literal | bin_literal | oct_literal | hex_literal
dec_literal ::=  "1"..."9" digit*
bin_literal ::=  "0" ("b" | "B") bin_digit+
oct_literal ::=  "0" oct_digit*
hex_literal ::=  "0" ("x" | "X") hex_digit+

digit     ::=  "0"..."9"
bin_digit ::=  "0" | "1"
oct_digit ::=  "0"..."7"
hex_digit ::=  digit | "a"..."f" | "A"..."F"

float_literal ::=  digit+ "." digit+ | (digit+ ["." digit+]) exponent
exponent      ::=  ("e" | "E") ["+" | "-"] digit+

string_literal ::=  '"' dstring_char* '"' | "'" sstring_char* "'"
dstring_char   ::=  <any source character except '"'>
sstring_char   ::=  <any source character except "'">

bool_literal ::=  "true" | "false"
```

Here are some examples of literals in Thrift:

```thrift
42               // decimal integer literal
0xCAFE           // hexadecimal integer literal
3.14159          // floating-point literal
"Don't panic!"   // string literal using double quotes
'Heart of Gold'  // string literal using single quotes
true             // Boolean literal
```

Literals in Thrift do not have exact types. Instead they are represented using maximum precision and the actual type is inferred from context. For example:

```thrift
const i32 BIG = 42;
const i16 LITTLE = 42;
```

The literal `42` is treated as a 32-bit integer in the definition of `BIG` and as a 16-bit integer in the definition of `LITTLE`.

### Operators and Punctuation

The following tokens serve as operators and punctuation in Thrift:

```
(       )       {       }       [       ]       <       >
,       ;       @       =       +       -
```

Thrift uses an optional comma (`,`) or semicolon (`;`) as delimiters in certain constructs such as argument and field lists:

```grammar
delimiter ::=  ["," | ";"]
```

## Thrift Files

A Thrift file starts with an optional package declaration and a, possibly empty, sequence of include statements and namespace directives. It is followed by a sequence of definitions which can also be empty. There can be at most one package declaration and it is normally placed at the beginning of a source file.

```
thrift_file ::=
  (package_declaration | include_statement | namespace_directive)* definition*
```

Thrift supports three kinds of definitions: type definitions, constant definitions and service definitions.

```grammar
definition ::=  type_definition | constant_definition | service_definition
```

Here is an example of a Thrift file:

```thrift
// Prefix for universal name of each element type.
package "facebook.com/peoplesearch"

// Allows the definitions in search_types.thrift to be used here qualified with
// the prefix `search_types.`.
include "common/if/search_types.thrift"

// Directs the compiler to generate C++ code inside the namespace
// `facebook::peoplesearch::cpp2`, and to generate Java code inside the
// package `com.facebook.peoplesearch`.
namespace cpp2 facebook.peoplesearch
namespace java com.facebook.peoplesearch

// The port where the server listens for requests. This is a convenient way to
// define constants visible to code in all languages.
const i32 PORT = 3456;

// The default number of search results used below as the default value for
// `numResults`.
const i32 DEFAULT_NUM_RESULTS = 10;

// The argument to the `search` RPC. Contains two fields - the query and the
// number of results desired.
struct PeopleSearchRequest {
  1: search_types.Query query;
  2: i32 numResults = DEFAULT_NUM_RESULTS;
}

// The response from the `search` RPC. Contains the list of results.
struct PeopleSearchResponse {
  1: list<search_types.PersonMetadata> results;
}

/*
 * The service definition. This defines a single RPC `search`.
 */
service PeopleSearch {
  PeopleSearchResponse search(1: PeopleSearchRequest request);
}
```

## Include Statements

```grammar
include_statement ::=  "include" string_literal
```

Include statements allow the use of constants, types, and services from other Thrift files by prefixing the name (without extension) of the included Thrift file followed by a period.

```
include "common/if/search_types.thrift"

struct PeopleSearchRequest {
  // The type "Query" is defined in search_types.thrift.
  1: search_types.Query query,
  2: i32 numResults = DEFAULT_NUM_RESULTS,
}

struct PeopleSearchResponse {
  // The type "PersonMetadata" is defined in search_types.thrift.
  1: list<search_types.PersonMetadata> results,
}
```

Includes should not create a circular dependency between files. So `A.thrift` cannot include itself, and cannot include `B.thrift` if `B.thrift` includes `A.thrift`. Including multiple files with a common ancestor is okay - so `A.thrift` can include `B.thrift` and `C.thrift` when both `B.thrift` and `C.thrift` include `D.thrift`.

:::note
Includes are more like Python imports rather than a textual copy as in C/C++ includes. If `A.thrift` includes `B.thrift` and `B.thrift` includes `C.thrift`, then `A.thrift` can not access `C` unless it also includes `C.thrift`.
:::

## Package Declaration

A package declaration defines the default [Universal Name](spec/definition/universal-name.md) prefix and optional annotations, under which all definitions in the program are declared:

```
package_declaration:
    {Annotations}
    package "Domain/identifier{/identifier}";
```

For example:

```thrift
package "test.dev/testing"

// Has the universal name "test.dev/testing/MyInt".
typedef int MyInt
```

Annotations on a package declaration apply to the whole file. For example:

```thrift
@cpp.TerseWrite
package "foo.bar/baz"
```

This turns all fields in the current file into terse-write fields when possible.

## Namespace Directives

```grammar
namespace_directive ::=  "namespace" maybe_qualified_id namespace_name
namespace_name      ::=  maybe_qualified_id | string_literal
```

Namespace directives instruct the compiler on top level structure of the generated code. The details are language-specific. Namespace directives do not affect the Thrift file semantics.

```thrift
// Directs the compiler to generate C++ code inside the namespace
// `facebook::peoplesearch::cpp2`.
namespace cpp2 facebook.peoplesearch

// Directs the compiler to generate Java code inside the package
// `com.facebook.peoplesearch`.
namespace java com.facebook.peoplesearch
```

## Default Namespace

Package name contains "domain/paths". It implies following namespace

* C++: {reverse(domain)[1:]}.{paths}
* py3: {reverse(domain)[1:]}.{paths[:-2] if paths[-1] == filename else paths}
* hack: {paths}
* java: {reverse(domain)}.{paths}

:::note
User can override default namespace explicitly by using `namespace` keyword for each languages.
:::

Here is an example

```thrift
package "domain.com/path/to/file"
```

This package generates following namespace

```thrift
namespace cpp2 domain.path.to.file
namespace py3 domain.path.to
namespace hack path.to.file
namespace php path.to.file
namespace java2 com.domain.path.to.file
namespace java.swift com.domain.path.to.file
```

If package name doesn't contain filename, it generates different namespace for `py3`

```thrift
package "domain.com/path/to"
```

This package generates following namespace

```thrift
namespace cpp2 domain.path.to
namespace py3 domain.path.to
namespace hack path.to
namespace php path.to
namespace java2 com.domain.path.to
namespace java.swift com.domain.path.to
```

## Basic Thrift Types

### Primitive Types

```
PrimitiveType ::=
  "bool" | "byte" | "i16" | "i32" | "i64" | "float" | "double" | "binary" | "string"
```

* `bool`: `true` and `false` values
* `byte`: 8-bit signed integers
* `i16`: 16-bit signed integers
* `i32`: 32-bit signed integers
* `i64`: 64-bit signed integers
* `float`: 32-bit floating points
* `double`: 64-bit floating points
* `string`: UTF-8 strings
* `binary`: byte arrays

:::note
Thrift does not support unsigned integers because they have no direct translation to native (primitive) types in many of Thrift’s target languages.
:::

:::note
Some target languages enforce that `string` values are UTF-8 encoded and others do not. For example, Java and Python require valid UTF-8, while C++ does not. This can appear as cross-language incompatibility.
:::

:::note
`binary` and `string` are encoded identically for RPC (Binary and Compact protocols) and are interchangeable. However, they are encoded differently in JSON protocols: `binary` is base64-encoded while `string` only has special characters escaped.
:::

### Container Types

```
ContainerType ::=
  ListType
| SetType
| MapType

ListType ::=
  "list" "<" TypeSpecification ">"

SetType ::=
  "set" "<" TypeSpecification ">"

MapType ::=
  "map" "<" TypeSpecification "," TypeSpecification ">"
```

Thrift has strongly-typed containers that map to commonly used containers in target programming languages. There are three container types available:

* `list<T>`: A list of elements of type `T`. May contain duplicates.
* `set<T>`: An unordered set of unique elements of type `T`.
* `map<K,V>`: An unordered map of unique keys of type `K` to values of type `V`.

:::note
In some languages default mode is to use ordered sets and maps. This could be changed to use unordered and customized containers - see [Thrift Annotations](/spec/definition/annotation.md#unstructured-annotations-deprecated).
:::

:::caution
Although not enforced, it is strongly encouraged to only use set and map when key is either a string or an integer type for the highest compatibility between languages.
:::

The element, key, and value types can be any Thrift type, including nested containers.

### Type Specifications

```
TypeSpecification ::=
  PrimitiveType
| ContainerType
| maybe_qualified_id
```

A type specification is used to refer to a type. It can be a primitive type, a container type, or a name that denotes a type defined elsewhere. The name can be an identifier that denotes a type defined in the same Thrift file, or a qualified name of the form `filename.typename` where `filename` and `typename` are identifiers, and `typename` denotes a type defined in the Thrift file denoted by `filename`.

NOTE: All type definitions (see section below) define a type with a name - this name denotes that type.

### Enumeration Types

```
EnumerationType ::=
  "enum" identifier "{" ( Enumerator delimiter )* "}"

Enumerator ::=
  identifier "=" integer
```

Thrift supports C++ style enumeration types. The enumerators (the named constants) must be explicitly bound to an integer value. The identifier after the reserved word `enum` may be used to denote the enumeration type.

```thrift
enum SearchKind {
  UNKNOWN = 0,  // default value
  PEOPLE = 1,
  PAGES = 3,
  GROUPS = 5,
}
```

:::note
Because the default value for every enum is 0 (even if you do not define an enumerator for 0), it is recommended to include an enum at 0 and use that value to indicate that the client or server didn't provide the value. The default constructor will initialize that value to `UNKNOWN` instead of some meaningful value.
:::

:::caution
Enums are treated like integer by Thrift, if you send a value which is not in the valid range, the receiver will not check or convert the value to the default, it will just have an out of range value. This can happen when a new client is talking to an old server.
:::

:::caution
Removing and adding enum values can be dangerous - see [Schema Compatibility](/features/compatibility.md).
:::

### Typedefs

```
TypeDef ::=
  "typedef" TypeSpecification identifier
```

Typedefs introduce a name that denotes the type specification. It can be used to provide a simpler way to access complex types.

```thrift
typedef map<string, string> StringMap
```

## Struct Types

*The struct type is the centerpiece of the Thrift language. This is the basic unit of serialization and versioning in the language.*

This section defines the primary aspects of the struct type. Separate sections below define qualifiers and default values for struct fields, constraints on serialization of structs, and compatibility between different versions of struct types.

```
StructType ::=
  "struct" identifier "{"
    ( FieldSpecification delimiter )*
  "}"

FieldSpecification ::=
  FieldId ":" [ Qualifier ] TypeSpecification identifier [ DefaultValue ]

FieldId ::=
  integer
```

Structs in Thrift look very similar to structs in C++ - though fields in Thrift structs have a field id, and optionally a qualifier and a default value. They are significantly different in that the order of appearance of fields is not important and there is no expectations on the memory layout of the objects in the corresponding programming language code.

```thrift
enum Gender { MALE = 1, FEMALE = 2 }

struct PersonMetadata {
  1: string name;
  2: Gender gender;
  3: i32 age;
  4: list<i64> friendIds;
}
```

Every field has a type and a name (an identifier) that can be used to denote the field just as in C++. In addition every field also has an integer id that can be used to denote the field. Field ids and field names must be unique within a struct. While the Thrift language does not impose restrictions on how the id and name are used, the *primary usage* has the id denoting the field in the serialized data and the name denoting the field in the generated code. This primary usage is key to the value provided by Thrift in terms of versioning support and compact serialized data size.

NOTE: The *primary usage* described above can be assumed for the large majority of Thrift usage at Facebook. The exception to this is that Thrift does offer a JSON serialization strategy where the name is used to denote the field in the serialized data and the id is not used. This strategy is used in Configerator and Tupperware specs and should not be mixed with other usage where the id is used instead.

The field ids should be in the range of 1 through 65535, and they do not have to appear in order.

Thrift does not support structure inheritance (though it is possible to use composition to achieve a similar goal).

As a consequence of the above rules, `PersonMetadata1` below defines the same type as `PersonMetadata` above:

```thrift
// Just a different ordering of fields.
struct PersonMetadata1 {
  3: i32 age;
  1: string name;
  4: list<i64> friendIds;
  2: Gender gender;
}
```

But the following two types are both legal, but different from `PersonMetadata`:

```thrift
// Some ids are different.
struct PersonMetadata2 {
  590: string name;
  2: Gender gender;
  36: i32 age;
  4: list<i64> friendIds;
}

// Some names are different.
struct PersonMetadata3 {
  1: string firstName;
  2: Gender gender
  3: i32 age;
  4: list<i64> friends;
}
```

NOTE: Field ids do not have to start at 1.

WARNING: Do not reuse ids. If a field is removed from a struct, it's a good practice to comment it out as a reminder to not to reuse it.

Qualifiers and default values are described in a later section.

## Union Types

```
UnionType ::=
  "union" identifier "{"
    ( FieldSpecification delimiter )*
  "}"
```

Union types are identical to struct types in all ways, except for the following differences:

* Union types use the reserved word `union` instead of `struct`.
* All fields must be unqualified, but they are equivalent to struct fields with the qualifier `optional`.
* At most one field can be *present*.

NOTE: The concepts "optional" and "present" are described in more detail below.

The serialized representation of union types are identical to that of struct types that have a single field present. When deserializing into an union type, the serialized data may not provide a value to more than one of the fields of the union type.

The generated code for union types can be different from that of struct types - for example, implementations may choose to use programming language union types in generated code for better space efficiency.

NOTE: It is okay for none of the fields to be present in an union type.

NOTE: It is possible to serialize from an union type and deserialize into a compatible struct type, and vice versa.

## Exception Types

```
ExceptionType ::=
  "exception" identifier "{"
    ( FieldSpecification delimiter )*
  "}"
```

Exception types are identical to struct types in all ways, except that these types can only be used as types within the `throws` clause of functions in service definitions. (This isn't enforced, but you still shouldn't do it).

The serialized representation of exception types are identical to that of struct types.

The generated code for exception types can be different from that of struct types - for example, programming language exception types can be used in generated code.

:::note
It is possible to serialize from an exception type and deserialize into a compatible struct type, and vice versa.
:::

## Type Definitions

```
TypeDefinition ::=
  Typedef
| EnumerationType
| StructType
| UnionType
| ExceptionType
```

Type definitions appear at the top level of a Thrift file. The different kinds of type definitions have already been described. A common property of all type definitions is that they introduce a name (an identifier) that can be used to denote the type.

The name introduced by type definitions can be used anywhere in the Thrift file (either before or after the location of the definition), and in other Thrift files that include this Thrift file.

## Constant Definitions

```
constant_definition ::=
  "const" TypeSpecification identifier "=" Constant
```

A constant definition introduces a name for a value. This name can be used instead of the value after the completion of constant definition, and in other Thrift files that include this Thrift file.

```
Constant ::=
  integer
| float
| string_literal
| bool_literal
| maybe_qualified_id
| ListOrSetConstant
| MapConstant

integer ::=  ["+" | "-"] int_literal
float   ::=  ["+" | "-"] float_literal
```

The constant on the right hand side of `"="` can be:

* A literal
* A name
* A list, set, or map constant

### Literal Constants

```thrift
const bool flag = true
const byte offset = -10 // byte is a 8-bit *signed* integer
const i32 count = 200
const i16 bits = 0241 // octal value (starts with 0)
const i32 mask = 0xFA12EE // hex value (starts with 0x)
const float pi = 3.1416
const double e = 2.718281828459
const string error = 'unknown protocol'
const string date = "June 28, 2017"
```

### Name Constants

Name constants can be one of:

* An identifier that denotes a constant defined in the same Thrift file.
* A qualified name of the form `filename.constname` where `filename` and `constname` are identifiers, and `constname` denotes a constant defined in the Thrift file denoted by `filename`.
* A qualified name of the form `enumtype.enum` where `enumtype` and `enum` are identifiers, and `enum` denotes an enumerator defined in the enumeration type `enumtype`.
* A qualified name of the form `filename.enumtype.enum` where `filename`, `enumtype`, and `enum` are identifiers, and `enum` denotes an enumerator defined in the enumeration type `enumtype`, which in turn is defined in the Thrift file denoted by `filename`.

```
const i32 SEARCH_AGGREGATOR_PORT = PORT
const double EULERS_NUMBER = MathConstants.e
const Gender NAN = Gender.MALE
const search_types.Gender NV = search_types.Gender.FEMALE
```

### List, Set, and Map Constants

```
ListOrSetConstant ::=
  "[" ( Constant delimiter )* "]"

MapConstant ::=
  "{" ( Constant ":" Constant )* "}"
```

Constants can also be of list, set, or map types.

```
list<i32> AList = [2, 3, 5, 7]

set<string> ASet = ["foo", "bar", "baz"]

map<string, list<i32>> AMap = {
  "foo" : [1, 2, 3, 4],
  "bar" : [10, 32, 54],
}
```

NOTE: We cannot write constants of struct, union, or exception types.

## Default Values

```
DefaultValue ::=
  "=" Constant
```

All fields of struct types and exception types have a default value. This is either explicitly provided via the syntax shown above, or (if not explicitly provided) is the natural default value for that type. The natural default values for listed below:

* bool: `false`
* byte and integer types: 0
* enum: 0 (even enum has no value for zero)
* float and double: 0.0
* string and binary: empty string
* containers: empty container
* structs: language dependent. Empty struct for C++, null/None for Hack/python/Java

Default values are used as follows:

* To initialize required fields (fields with the qualifier `required`).
* As the value used to serialize an unqualified field (a field with no qualifier) when this field is *not present*.

NOTE: The concepts "required", "unqualified", and "not present" are described in more detail below.

In addition, default values can be used in generated code to provide default behaviors when fields have not been initialized. For example, the method `getValueOrDefault()` can be provided for a field that returns the value of the field when present, and the default value when not present.

```
enum Foo { A = 1, B = 2, C = 3}
struct Person {
 1: i64 age;
 2: string name;
}
struct Bar {
  1: i64 field1 = 10;  // default value is 10
  2: i64 field2;  // default value is 0
  3: map<i32, string> field3 = {15 : 'a_value', 2: 'b_value'};  // default value is the map with two entries
  4: list<Foo> = [Foo.A, Foo.B, Foo.A];  // default value is a list with three entries
  5: Person person = {"age": 40, "name": "John"}; // default value is a struct with these default values
}
```

:::caution
Avoid using default values on optional fields. It is not possible to tell if the server sent the value, or if it is just the default value.
:::

:::caution
Do not change default values after setting them. It is hard to know what code may be relying on the previous default values.
:::

## Qualifiers

```
Qualifier ::=
  "required" | "optional"
```

The fields of a Thrift object may assume any value of their types. In addition the field may also be "uninitialized" (formally "not present"). I.e., the *state* of a field is either *not present*, or *present* with a particular value of their type.

There are four kinds of fields that may be part of a struct type (or exception type):

* ~~required: Field is qualified with the reserved word `required`.~~ (deprecated)
* *optional*: Field is qualified with the reserved word `optional`.
* *terse*: Filed is annotated with the structured annotation `@thrift.TerseWrite`.
* *unqualified*: Field is not qualified with either of these reserved words or `@thrift.TerseWrite`.

NOTE: Union types may only have optional fields.

```
include "thrift/annotation/thrift.thrift"

struct PeopleSearchRequest {
  1: required search_types.Query query; // required field
  2: i32 numResults; // unqualified field
  3: optional Location currentLocation; // optional field
  @thrift.TerseWrite
  4: i32 count; // terse field
}
```

These field kinds are different with respect to the states they may assume, and also with respect to their serialization and deserialization behavior.

### ~~Required Fields~~

:::caution
Do not use in the new code!
:::

~~Required fields are always _present_ and they get initialized to their default value when the object is initialized (or reinitialized). Generated code must provide a way to change the value of required fields. When serializing an object, required fields are always encoded into the serialized data. The serialized data must provide a value during deserialization into a required field.~~

Presence of required fields is not being enforced anymore (Java still does, but that is being removed too).

### Optional Fields

Optional fields start their lifecycle as *not present* (when the object is initialized or reinitialized). Generated code must provide a way to introduce the field (change state from *not present* to *present*) and to reinitialize the field (change state from *present* to *not present*). Generated code must also provide a way to change the value of optional fields. When serializing an object, optional fields are encoded into the serialized data if and only if they are *present*. During deserialization, the serialized data may or may not provide a value for an optional field. If a value is provided, optional field becomes *present* with that value, otherwise the optional field does not change its state.

### Unqualified Fields

Unqualified fields are just like optional fields with the following difference: When an object with an unqualified field is serialized and the field is *not present*, the default value of the field is serialized as the value for that field.

:::note
Regarding unqualified vs. optional field, we don't have a generalized strong recommendation on which one should be used. It depends on individual use cases. If you need to know whether the field is explicit set or not, use optional fields.
:::

### Terse Fields

Terse fields do not distinguish whether they are explicitly set. They are skipped during serialization if their values are equal to the [intrinsic default values](./#intrinsic-default-values).

## **Services**

```
service_definition ::=
  "service" identifier [ "extends" maybe_qualified_id ] "{"
    ( FunctionSpecification )*
  "}"

FunctionSpecification ::=
  ResultType identifier
  "("
  ( ParameterSpecification )*
  ")"
  [ "throws" "(" ( FieldSpecification )+ ")" ]

ResultType ::= "void" | "oneway void" | [ "stream" ] TypeSpecification

ParameterSpecification ::= FieldId ":" TypeSpecification identifier [ DefaultValue ]
```

An interface for RPC is defined in a Thrift file as a service.

Each service has a set of functions. Each function has a unique name and takes a list of arguments. It can return normally with a result if the result type is not `void` or it can return by throwing one of the listed application exceptions. In addition, the function can return by throwing a Thrift system exception if there was some underlying problem with the RPC itself.

The types of the field specifications after `throws` must be exception types. If a functions throws one of the exceptions given in the `throws` clause, then all of the members of this exception will be serialized and sent over the wire. For other undeclared exceptions only the message will be serialized and they will appear on the client side as `TApplicationException`.

The list of arguments to the function follow similar rules as Thrift struct types with the exception of qualifiers, meaning that **arguments cannot be optional**. The proper way to achieve this is to use a struct type argument, which itself then may contain an `optional` field.

Functions that use the `oneway` reserved word (oneway functions) are "fire and forget". I.e., the client sends the function parameters to the server, but does not wait or expect a result. Therefore oneway functions must use `void` as the return type and must not have a `throws` clause.

Services may extend (inherit from) other services. The set of functions in the inherited service is included in the inheriting service. The name that refers to the inherited service after the reserved word `extends` can be an identifier that denotes another service defined earlier in the same Thrift file, or a qualified name of the form `filename.servicename` where `filename` and `servicename` are identifiers, and `servicename` denotes a service defined in the Thrift file denoted by `filename`.

Service names are visible after the end of the service definition in which they have been introduced, and in other Thrift files that include this Thrift file.

```
struct Foo {
  1: i64 field1 = 101;
  2: string field2;
}

exception BarException {
  1: string message,
  2: i64 errorCode,
}

exception FooException {
  1: string message,
  2: i64 errorCode,
}

struct GetFoosRequest {
  1: list<i64> ids;
}

service Bar {
  void ping() throws (1: BarException e),
  Foo getFoos(1: GetFoosRequest request) throws (1: BarException e),
  oneway void fireAndForget(),
  stream Foo getStream(1: GetFoosRequest request)
      throws (1: BarException e1) stream throws (1: FooException e2),
  i32, stream Foo getResponseAndStream(1: GetFoosRequest request)
      throws (1: BarException e1) stream throws (1: FooException e2),
}
```

WARNING: New arguments could be added to a method, but it is better to define an input struct and add members to it instead. The server cannot distinguish between missing arguments and default values, so a request object is better.

*TBD: Need to discuss versioning of services*

### Exception and RPC Keywords

##### exception

* Fault attribution: *server* vs. *client*
* Error classification: *transient*, *stateful* or *permanent*
* Error safety: *safe* (vs. unspecified)

##### RPC

* RPC idempotency keywords: `readonly`, `idempotent`.

Please refer [Automatic Retries, RPC idempotency and Error Classification](/features/exception.md) for more information on why you should use these keywords and how these combined can enable automatic retries in SR.

### Streaming

Please refer [Thrift Streaming](/fb/features/streaming/index.md) for more information on Streaming.