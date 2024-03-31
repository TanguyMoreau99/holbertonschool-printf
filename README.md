# Recreate a simple _printf

![UML Activity diagram](~/holbertonschool-printf/UML_activity_diagram.png)

## Description :clipboard:
Our project implements a _printf function in C, which produces output according to a given format string.

It handles conversion specifiers for characters (%c), strings (%s), and percent signs (%%).
Additionally, it handles conversion specifiers for signed integers (%d, %i).

## How to Use :paperclip:
To use our _printf function, follow these steps:
1. Clone this repository to your local machine.
2. Include the `main.h` header file in your C source files where you want to use the custom _printf function.
3. Call the `_printf()` function with the desired format string, specifiers and arguments.

| Specifiers to use | Description |
|-----------|-----------|
| %c | Print a unique character |
| %s | Print a string |
| %% | Print a % |
| %d | Print a decimal number |
| %i | Print an integer number |
|

4. Our code will be compiled this way :
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
5. Execute the compiled file to see the output.

## Files :page_facing_up:
- `main.c` : Example usage of our _printf function to run tests.
- `main.h` : Header file containing function prototypes and necessary includes.
- `_printf.c` : Implementation of our _printf function.
- `_putchar.c` : Implementation of our _putchar function.
- `_puts.c` : Implementation of our _puts function without line break.
- `get_print_function.c` : Implementation of a function to link specifier to specific functions to print.
- `print_texts.c` : Implementation of 3 functions to print character, string or %.
- `print_numbers.c` : Implementation of 2 functions to print integers or decimal.
- `man_3_printf` : Manual page for our _printf function.

## Requirements :pushpin:
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with specific options (-Wall -Werror -Wextra -pedantic -std=gnu89).
- The code should follow the Betty style.
- No global variables are allowed.
- Maximum of 5 functions per file.
- Prototypes of all functions should be included in `main.h`.
- Use of authorized functions and macros only (write, malloc, free, va_start, va_end, va_copy, va_arg).
- Handle specific conversion specifiers as mentioned in the project requirements.

## Example :bulb:
```c
#include "main.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
 int len;
 int len2;

 len = _printf("Let's try to printf a simple sentence.\n");
 len2 = printf("Let's try to printf a simple sentence.\n");
 _printf("Length:[%d, %i]\n", len, len);
 printf("Length:[%d, %i]\n", len2, len2);
 _printf("Negative:[%d]\n", -762534);
 printf("Negative:[%d]\n", -762534);
 _printf("Character:[%c]\n", 'H');
 printf("Character:[%c]\n", 'H');
 _printf("String:[%s]\n", "I am a string !");
 printf("String:[%s]\n", "I am a string !");
 len = _printf("Percent:[%%]\n");
 len2 = printf("Percent:[%%]\n");
 _printf("Len:[%d]\n", len);
 printf("Len:[%d]\n", len2);
 _printf("Unknown:[%r]\n");
 printf("Unknown:[%r]\n");
 return (0);
}
```

## Authors :pencil2:
* **Tanguy Moreau** - *Co-creator* - [Link to GitHub](https://github.com/TanguyMoreau99)

* **Catherine Jiguet** - *Co-creator* - [Link to GitHub](https://github.com/Jiguet-C)


## Credits
This project is a part of the curriculum at [Holberton School](https://www.holbertonschool.com/).

![Holberton logo](https://blog.holbertonschool.com/wp-content/uploads/2019/04/instagram_feed180-1024x1024.jpg)
