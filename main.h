#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct print - Define the structure of all print functions
 *
 * @specifier: The specifier
 * @print_function: The function associated
 */

typedef struct print
{
	char *specifier;
	int (*print_function)(va_list);
} print;

int _putchar(char c);
int _printf(const char *ptr_format, ...);
int (*get_print_function(const char *ptr_specifier))(va_list);
int print_char(va_list ptr_var);
int print_string(va_list ptr_var);
int print_percent(va_list ptr_var);
int print_decimal(va_list ptr_var);
int print_integer(va_list ptr_var);

#endif
