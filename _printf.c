#include "main.h"

/**
 * _printf - Print a specific function inside a chain of characters
 * @ptr_format: The character to print
 *
 * Return: number of printed characters
 */

int _printf(const char *ptr_format, ...)
{
	int index;
	int (*ptr_print)(va_list);
	va_list ptr_var;

	va_start(ptr_var, ptr_format);
	index = 0;

	while (ptr_format[index] != '\0')
	{
		if (ptr_format[index] == '%')
		{
			if (ptr_format[index + 1] != '\0')
			{
				ptr_print = get_print_function(&ptr_format[index + 1]);

				if (ptr_print == NULL)
				{
					_putchar('%');
				}
				else
				{
					ptr_print(ptr_var);
					index++;
				}
			}
		}
		else
			_putchar(ptr_format[index]);
		index++;
	}

	va_end(ptr_var);
	return (index);
}
