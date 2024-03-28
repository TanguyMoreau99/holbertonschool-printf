#include "main.h"

/**
 * _printf - Print a chain of characters and a specific function inside
 * if a specifier is included.
 * @ptr_format: String given by the user
 *
 * Return: if success, number of printed characters. if error : -1
 */

int _printf(const char *ptr_format, ...)
{
	int index = 0;
	int count_char = 0;
	int (*ptr_print)(va_list);
	va_list ptr_var;

	if (ptr_format == NULL)
	{
		return (-1);
	}

	va_start(ptr_var, ptr_format); /* Initialize variadic list of arguments */

	/* Display character by character */
	while (ptr_format[index] != '\0')
	{
		/* If the character is equivalent to '%' */
		if (ptr_format[index] == '%')
		{
			/* If the next character is not the end of the string */
			if (ptr_format[index + 1] != '\0')
			{
				/* Link the specifier to the right function */
				ptr_print = get_print_function(&ptr_format[index + 1]);

				/* If the specifier is not on the list, print '%'
				add the count of characters */
				if (ptr_print == NULL)
				{
					_putchar('%');
					count_char++;
				}
				/* If the specifier is on the list, print the variable given on
				the variadic list of arguments, add the count of characters
				and skip the next character */
				else
				{
					count_char = count_char + ptr_print(ptr_var);
					index++;
				}
			}
		}
		/* If the character is other than '%', print the character and
		add the count of characters */
		else
		{
			_putchar(ptr_format[index]);
			count_char++;
		}
		/* Go on the next character */
		index++;
	}

	va_end(ptr_var); /* Free variadic list of arguments */
	return (count_char); /* Return the number of printed characters */
}
