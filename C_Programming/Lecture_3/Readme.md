# C Basics

Summary for Lecture 3

## Variable Naming Rules <a name="variable-naming-rules"></a>

When naming variables in C, it is essential to follow certain rules:

  - Variable names must begin with a letter (a-z, A-Z) or underscore (_).
  - The rest of the variable name can consist of letters, digits (0-9), and underscores.
  - Variable names are case-sensitive, so "count" and "Count" are considered different variables.
  - Avoid using reserved words or keywords (e.g., int, float, if, while) as variable names.
  - Choose descriptive and meaningful names to enhance code readability.

## Data Types in C <a name="data-types-in-c"></a>

C provides several built-in data types:

   - int: Used to store integers.
   - float: Used to store floating-point numbers.
   - char: Used to store single characters.
   - double: Used to store double-precision floating-point numbers.
   - short: Used to store small integers.
   - long: Used to store large integers.
   - unsigned: Used with int, char, short, and long to represent positive values only.

## Type Conversion in C <a name="type-conversion-in-c"></a>

Type conversion allows you to convert between different data types. C supports two types of conversions:
  - Implicit Conversion: Automatically performed by the compiler when it is safe to do so (e.g., assigning an int to a float).
  - Explicit Conversion: Also known as casting, it is done explicitly by the programmer using type-casting operators.
```C
int num1 = 10;
float num2;

// Implicit conversion
num2 = num1;  // The value of num1 is implicitly converted to float

int num3 = 15;
float num4 = 3.14;
int result;

// Explicit conversion (casting)
result = (int)(num4 * num3);  // The result of the multiplication is explicitly cast to an int
```
## Hierarchy of Operations <a name="hierarchy-of-operations"></a>

The hierarchy of operations in C determines the order in which operators are evaluated. It follows the PEMDAS rule (Parentheses, Exponents, Multiplication and Division, Addition and Subtraction).

```C
int result = 2 + 3 * 4;  // The multiplication is performed first, then the addition
```

## Input/Output in C <a name="inputoutput-in-c"></a>

C provides the scanf() and printf() functions for input and output operations, respectively. These functions allow you to read and write data from/to the console.

```C
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number you entered is: %d\n", num);
    return 0;
}
```
## Mathematical and Logical Expressions <a name="mathematical-and-logical-expressions"></a>

C supports a variety of mathematical and logical expressions. Here are a few examples:

```C
int x = 5, y = 10;
int sum = x + y;  // Addition
int difference = x - y;  // Subtraction
int product = x * y;  // Multiplication
float division = (float)x / y;  // Division (explicit casting to float)
int modulus = x % y;  // Modulus (remainder)
int isGreater = x > y;  // Greater than comparison (returns 0 or 1)
int isEqual = x == y;  // Equality comparison (returns 0 or 1)
int logicalAnd = (x > 0) && (y > 0);  // Logical AND (returns 0 or 1)
int logicalOr = (x > 0) || (y > 0);  // Logical OR (returns 0 or 1)
```

## Coding Convention <a name="coding-convention"></a>

Following a coding convention enhances code readability and maintainability. While coding conventions may vary between individuals and organizations, here are some common practices:
  - Use consistent and meaningful variable and function names.
  - Indent code with spaces or tabs for better visual structure.
  - Add comments to explain complex logic or provide documentation.
  - Use proper spacing around operators and parentheses.
  - Break long lines of code into multiple lines for readability.
  - Follow consistent capitalization rules for variable and function names (e.g., camelCase or snake_case).

## Controlling Program Flow <a name="controlling-program-flow"></a>
- If Statement <a name="if-statement"></a>
  The if statement allows conditional execution of code based on a condition.

  ```C
  int num = 10;

  if (num > 0) {
      // Code to execute if the condition is true
      printf("The number is positive.\n");
  } else {
      // Code to execute if the condition is false
      printf("The number is non-positive.\n");
  }
  ```
- Switch Statement <a name="switch-statement"></a>

  The switch statement provides a way to select one of many code blocks to execute based on the value of a variable.
  
  ```C
  int day = 3;
  
  switch (day) {
      case 1:
          printf("Monday\n");
          break;
      case 2:
          printf("Tuesday\n");
          break;
      case 3:
          printf("Wednesday\n");
          break;
      default:
          printf("Invalid day\n");
          break;
  }
  ```
- Conditional Operator <a name="conditional-operator"></a>

  The conditional operator (? :) allows you to write concise conditional expressions.
  
  ```C
  int num = 5;
  int result = (num > 0) ? 10 : -10;
  
  // Equivalent to:
  // if (num > 0) {
  //     result = 10;
  // } else {
  //     result = -10;
  // }
  ```
- For Statement <a name="for-statement"></a>

  The for statement is used to execute a block of code repeatedly for a fixed number of times.
  
  ```C
  for (int i = 0; i < 5; i++) {
      printf("%d\n", i);
  }
  ```

- While Loop <a name="while-loop"></a>

  The while loop repeatedly executes a block of code as long as a condition remains true.
  
  ```C
  int i = 0;
  
  while (i < 5) {
      printf("%d\n", i);
      i++;
  }
  ```
- Do-While Loop <a name="do-while-loop"></a>
  
  The do-while loop is similar to the while loop, but it guarantees that the code block is executed at least once before checking the condition.
  
  ```C
  int i = 0;
  
  do {
      printf("%d\n", i);
      i++;
  } while (i < 5);
  ```

- goto Statement <a name="goto-statement"></a>
  
  The goto statement allows unconditional branching to a labeled statement within the same function.
  
  ```C
  int i = 0;
  
  loop:
  if (i < 5) {
      printf("%d\n", i);
      i++;
      goto loop;
  }
  ```

- Break Statement <a name="Break-Statement"></a>

  The break statement is used to exit from a loop or switch statement prematurely.
  
  ```C
  for (int i = 0; i < 10; i++) {
      if (i == 5) {
          break;  // Exit the loop when i is equal to 5
      }
      printf("%d\n", i);
  }
  ```

- Continue Statement

  The continue statement is used to skip the remaining code within a loop iteration and proceed to the next iteration.
  
  ```C
  for (int i = 0; i < 10; i++) {
      if (i == 5) {
          continue;  // Skip the rest of the code and move to the next iteration
      }
      printf("%d\n", i);
  }
  ```
