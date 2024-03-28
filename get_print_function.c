#include "main.h"

/**
 * get_print_function - check and verify the specifier to send it
 * to the right function to use
 *
 * @ptr_specifier: The specifier
 *
 * Return: Function to use if a specifier is found or NULL if else
 */


int (*get_print_function(const char *ptr_specifier))(va_list)
{
	print spe[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_decimal},
		{"i", print_integer},
		{NULL, NULL}
		};
	int index = 0;

	while (spe[index].specifier != NULL)
	{
		if (spe[index].specifier[0] == ptr_specifier[0])
		{
			return (spe[index].print_function);
		}
		index++;
	}

	return (NULL);
}
