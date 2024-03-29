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

	while (ptr_format[index] != '\0') /* Display character by character */
	{
		if (ptr_format[index] == '%') /* If the character is equivalent to % */
		{
			if (ptr_format[index + 1] != '\0')
			{
				ptr_print = get_print_function(&ptr_format[index + 1]);

				if (ptr_print == NULL)
				{
					_putchar('%');
					count_char++;
				}
				else
				{
					count_char = count_char + ptr_print(ptr_var);
					index++;
				}
			}
		}
		else
		{
			_putchar(ptr_format[index]);
			count_char++;
		}
		index++; /* Go on the next character */
	}
	va_end(ptr_var); /* Free variadic list of arguments */
	return (count_char); /* Return the number of printed characters */
}
