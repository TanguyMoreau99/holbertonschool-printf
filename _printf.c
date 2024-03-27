#include "main.h"

/**
 * _printf - Print a specific function inside a chain of characters
 * @ptr_format: The character to print
 *
 * Return: Count of characters - string length
 */

int _printf(const char *ptr_format, ...)
{
	int i;
	int (*ptr_print)(va_list);
	va_list ptr_var;

	va_start(ptr_var, ptr_format);
	i = 0;

	while (ptr_format[i] != '\0')
	{
		if (ptr_format[i] == '%')
		{
			if (ptr_format[i + 1] != '\0')
			{
				ptr_print = get_print_function(&ptr_format[i + 1]);

				if (ptr_print == NULL)
				{
					_putchar('%');
				}
				else
				{
					ptr_print(ptr_var);
					i++;
				}
			}
		}
		else
			_putchar(ptr_format[i]);
		i++;
	}

	va_end(ptr_var);
	return (*ptr_format);
}
