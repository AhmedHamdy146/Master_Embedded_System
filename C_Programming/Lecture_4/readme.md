# Arrays && Strings

## Arrays

### Definition

An array in C is a collection of elements of the same data type, stored in contiguous memory locations. Each element within the array is accessed by its index, which represents its position in the array. Arrays are widely used to store and manipulate multiple values efficiently.

### Declaration

To use an array in C, you need to declare it before you can use it. The declaration of an array includes specifying its data type and size.

Syntax:
```C
data_type array_name[array_size];
```

Example:
```C
int numbers[5];  // Declares an integer array named "numbers" with a size of 5
```
### Initialization

Arrays can be initialized at the time of declaration, where you provide initial values for the elements. Alternatively, you can assign values to array elements individually after declaration.

Syntax (Initialization at declaration):
```C
data_type array_name[array_size] = {value1, value2, ..., valueN};
```
Example:
```C
int numbers[5] = {1, 2, 3, 4, 5};  // Initializes an integer array named "numbers" with values 1, 2, 3, 4, 5
```
Syntax (Individual assignment after declaration):
```C
array_name[index] = value;
```
Example:
```C
numbers[0] = 10;  // Assigns 10 to the first element of the "numbers" array
numbers[3] = 7;   // Assigns 7 to the fourth element of the "numbers" array
```
### Usage and Accessing Array Elements

Array elements can be accessed using their index within square brackets ([]). The index starts from 0 for the first element and goes up to (size - 1) for the last element.

Syntax (Accessing an array element):
```C
variable = array_name[index];
```
Example:
```C
int x = numbers[2];  // Accesses the third element of the "numbers" array and assigns it to the variable "x"
```
Complete Example

Here's a complete example that demonstrates the declaration, initialization, and usage of an array in C:
```C
#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    printf("Sum of numbers: %d\n", sum);

    return 0;
}
```
In this example, we declare and initialize an integer array named "numbers" with values 1, 2, 3, 4, and 5. We then calculate the sum of all the elements in the array using a for loop and print the result. The output will be:
```C
Sum of numbers: 15
```
## Strings in C

### Definition

In C, a string is a sequence of characters stored in an array of characters. The last character of the string is always a null character ('\0'), which indicates the end of the string. Strings in C are commonly used for storing and manipulating textual data.
Declaration

To use a string in C, you can declare it as an array of characters and initialize it with a string literal or assign values to individual characters.

Syntax:
```C
char string_name[size];  // Declaration with a specific size
```
Example:
```C
char greeting[20];  // Declares a character array named "greeting" with a size of 20
```
### Initialization

Strings can be initialized at the time of declaration using a string literal.

Syntax:
```C
char string_name[] = "string_literal";
```
Example:
```C
char greeting[] = "Hello, World!";  // Initializes the string "greeting" with the value "Hello, World!"
```
### Common String Operations
- Input and Output

Strings can be read from input and written to output using the standard input/output functions.

Reading a string from input:
```C
scanf("%s", string_name);  // Reads a string from input and stores it in "string_name"
```
Writing a string to output:
```C
printf("%s", string_name);  // Writes the string in "string_name" to the output
```
- Concatenation

String concatenation involves combining two or more strings into a single string.
```C
strcat(destination, source);  // Concatenates "source" string to the end of "destination" string
```
Example:
```C
char greeting[20] = "Hello";
char name[] = "Alice";

strcat(greeting, name);  // Concatenates "name" to the end of "greeting"

printf("%s", greeting);  // Output: "HelloAlice"
```
- Length Calculation

The length of a string can be calculated using the strlen function.
```C
strlen(string_name);  // Returns the length of "string_name" excluding the null character
```
Example:
```C
char message[] = "Hello, World!";

int length = strlen(message);  // Calculates the length of "message"

printf("Length: %d", length);  // Output: "Length: 13"
```
- Comparison

To compare two strings, you can use the strcmp function.
```C
strcmp(string1, string2);  // Returns 0 if "string1" and "string2" are equal, a positive value if "string1" is greater, and a negative value if "string1" is smaller
```
Example:
```C
char password[] = "password123";
char input[] = "password456";

int result = strcmp(password, input);  // Compares "password" and "input"

if (result == 0) {
    printf("Access granted!");
} else {
    printf("Access denied!");
}
```
- Copying

To copy one string to another, you can use the strcpy function.
```C
strcpy(destination, source);  // Copies "source" string to "destination" string
```
Example:
```C
char source[] = "Hello, World!";
char destination[20];

strcpy(destination, source);  // Copies "source" to "destination"

printf("%s", destination);  // Output: "Hello, World!"
```
Popular Built-in Functions for String Manipulation

C provides several built-in functions in the <string.h> library for various string operations. Here are some of the most popular ones:

  - strlen: Calculates the length of a string.
  - strcpy: Copies one string to another.
  - strcat: Concatenates two strings.
  - strcmp: Compares two strings.
  - strstr: Searches for a substring within a string.
  - strchr: Searches for the first occurrence of a character in a string.
  - strtok: Splits a string into tokens based on a delimiter.

These functions, along with others available in the <string.h> library, provide powerful tools for string manipulation in C.
