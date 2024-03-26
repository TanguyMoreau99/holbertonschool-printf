#include "main.h"

/**
 * get_print_function - check and verifier the specifier to send it
 * to the right function to use
 *
 * @s: The specifier
 *
 * Return:
 */


int (*get_print_function(char *ptr_specifier))(va_list)
{
	print spe[] = { 
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_integer},
		{NULL, NULL},
	int i = 0;
	}
}
