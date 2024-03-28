#include "main.h"

/**
 * print_char - Print an unique character
 * @ptr_var: va_list
 *
 * Return: number of printed characters
*/

int print_char(va_list ptr_var)
{
	char character;

	character = va_arg(ptr_var, int);
	_putchar(character);
	return (1);
}

/**
 * print_string - Print a chain of characters
 * @ptr_var: va_list
 *
 * Return: number of printed characters
*/

int print_string(va_list ptr_var)
{
	int index;
	char *ptr_string = va_arg(ptr_var, char *);

	for (index = 0 ; ptr_string[index] != '\0' ; index++)
	{
		_putchar(ptr_string[index]);
	}
	return (index);
}

/**
 * print_percent - Print a % symbol
 * @ptr_var: va_list
 *
 * Return: number of printed characters
*/

int print_percent(va_list ptr_var)
{
	(void)ptr_var;

	_putchar('%');
	return (1);
}

/**
 * print_decimal - Print a decimal
 * @ptr_var: va_list
 *
 * Return: number of printed characters
*/

int print_decimal(va_list ptr_var)
{
	int integer = va_arg(ptr_var, int);
	int count = 0;
	int digit = 0;
	int memory = 0;

	if (integer == 0)
	{
		_putchar(0);

	}

	if (integer < 0)
		{
			_putchar('-');
			count = (count + 1);
			integer = (integer *(-1));
		}
	while (integer > 0)
	{
		digit = integer %10;
		memory = (memory * 10) + digit;
		integer = integer /10;
	}
	while (memory > 0)
	{
		digit = memory %10;
		_putchar(digit + '0');
		memory = memory /10;
		count++;
	}
	return(count);
}

/**
 * print_integer - Print an integer
 * @ptr_var: va_list
 *
 * Return: number of printed characters
*/

int print_integer(va_list ptr_var)
{
	return(print_decimal(ptr_var));
}
