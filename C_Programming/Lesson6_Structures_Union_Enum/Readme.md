# Structures & Unions & Enums

## Struct
A struct, short for structure, is a composite data type in C that allows you to group multiple variables of different types together. It provides a way to define a new data type by combining existing data types. The variables within a struct are called members or fields.
Syntax

To define a struct, you use the following syntax:
```C
struct struct_name {
    data_type member1;
    data_type member2;
    // ...
};
```
Example

Here's an example of defining a struct representing a person:
```C
struct Person {
    char name[50];
    int age;
    float height;
};
```
You can then declare variables of the struct type and access its members using the dot operator (.):
```C
struct Person person1;
strcpy(person1.name, "John Doe");
person1.age = 30;
person1.height = 1.75;
```
## Enum

An enum, short for enumeration, is a user-defined data type in C that consists of a set of named constants. It provides a way to define symbolic names (enumerators) for a group of related values.
Syntax

To define an enum, you use the following syntax:
```C
enum enum_name {
    enumerator1,
    enumerator2,
    // ...
};
```
Example
Here's an example of defining an enum representing the days of the week:
```C
enum Days {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
```
You can declare variables of the enum type and assign its enumerators:
```C
enum Days today = Wednesday;
```
## Union

A union is a special data type in C that allows storing different data types in the same memory location. It provides a way to define a data structure that can hold variables of different types, but only one member can have a value at a time.
Syntax

To define a union, you use the following syntax:
```C
union union_name {
    data_type member1;
    data_type member2;
    // ...
};
```
Example
Here's an example of defining a union representing a number that can be either an integer or a float:
```C
union Number {
    int intValue;
    float floatValue;
};
```
You can declare variables of the union type and access its members:
```C
union Number num;
num.intValue = 42;
printf("%d\n", num.intValue);

num.floatValue = 3.14;
printf("%f\n", num.floatValue);
```
Note that changing the value of one member will modify the value of other members in the union.

## Bit-Field

A bit-field is a data structure in C that allows you to specify the size (in bits) of each member within a struct or union. It provides a way to optimize memory usage by packing multiple variables within a single memory location.
Syntax

To define a bit-field, you use the following syntax within a struct or union:
```C
data_type member_name : number_of_bits;
```
Example

Here's an example of defining a struct with bit-fields representing a set of flags:
```C
struct Flags {
    unsigned int flag1 : 1;
    unsigned int flag2 : 2;
    unsigned int flag3 : 3;
};
```
You can declare variables of the struct type and access its bit-fields:
```C
struct Flags flags;
flags.flag1 = 1;
flags.flag2 = 2;
flags.flag3 = 3;
```
The number specified after the colon (:) represents the number of bits allocated for each member.
## Aligned and un-aligned data access on structs

* Notice This Line of code and compare it with previous knowledge
  
  ```c
  struct SPerson {
      unsigned char weghit;
      unsigned int age;
  }
  // Size of this struct = 8 bytes not 5 bytes
  ```

The reason of this result that because complier aims to fastest execution time so it follows aligned method 

### Aligned access

compiler generates instructions to store variables in natural size boundaries. Let's take the previous code as an example and show why it's 8 bytes not 5 suppose we made an object from this struct and weghit = 0xAA, age = 0xFFFFFFFF

these two variables are stored in memory like this:

| Memory | Value |
|:------:|:-----:|
| 0x000  | AA    |
| 0x001  | 0     |
| 0x002  | 0     |
| 0x003  | 0     |
| 0x004  | FF    |
| 0x005  | FF    |
| 0x006  | FF    |
| 0x007  | FF    |

weghit is stored in the first byte of the memory no problem with that, but when we come to age compiler has two instructions either store byte by byte or store 4 byte at once of course it will choose 4 bytes at once becase it will execute one instruction not four. but it deals with memory in a special way.



process of putting zeros is called padding

### un-aligned access

the oppesite of aligned access it stores them byte after byte regardless natural size boundary so it will store them like this

| Memory | Value |
| ------ | ----- |
| 0x000  | AA    |
| 0x001  | FF    |
| 0x002  | FF    |
| 0x003  | FF    |
| 0x004  | FF    |



to compare between aligned and un-aligned access -> aligend access is more effecient in execution time un-aligned access is more effecient from memory size. but it has bigger code size than aligned access



un-aligned access called packing

to enable packing in structs we use keywords that are dependent on compiler

- #pragma pack(1)

- #pragma pack(push, 1)

- after struct block "\_\_attrbuite\_\_ ((packed))"
## Padding

Padding refers to the extra bytes added to a struct or union to ensure proper alignment of its members in memory. The C compiler often adds padding bytes between members to optimize memory access and improve performance.
Padding Rules

The padding rules vary depending on the compiler, architecture, and compiler flags. Here are some common rules:

   - The size of a struct or union is always a multiple of the alignment requirement of its largest member.
   - The alignment requirement of a member is determined by its data type.
   - The compiler may add padding bytes at the end of a struct or union to satisfy the alignment requirements of the next object in memory.

To minimize padding, you can arrange the members in decreasing order of their size.
## Packing

Packing is a technique used to reduce or eliminate padding in a struct or union. It allows you to explicitly control the alignment and size of the members, which can be useful in certain scenarios, such as when working with binary data or when interfacing with hardware.
Packing Directives

Most C compilers provide directives or pragmas to control the packing ofstruct and union members. Here's an example of using a packing directive in GCC:
```C
#pragma pack(push, 1)  // Pack struct and union members with 1-byte alignment

struct PackedStruct {
    char c;
    int i;
    short s;
};

#pragma pack(pop)  // Restore default packing
```
In this example, the #pragma pack(push, 1) directive sets the packing alignment to 1 byte, and the #pragma pack(pop) directive restores the default packing.

Note that packing can have performance implications, as accessing unaligned data may be less efficient on some architectures.
## Conclusion

In this documentation, we covered the advanced concepts of struct, enum, union, bit-field, padding, and packing in the C programming language. Structs allow you to group variables together, enums provide symbolic names for related values, unions enable storing different data types in the same memory, bit-fields allow fine-grained control over memory usage, padding ensures proper alignment, and packing allows explicit control over alignment and size. Understanding these concepts will help you write more efficient and flexible code in C.
