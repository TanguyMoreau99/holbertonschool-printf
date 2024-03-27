#include "main.h"

/**
 * print_char - Print an unique character
 * @ptr_var: va_list
 *
 * Return: Always 0
*/

int print_char(va_list ptr_var)
{
	char c;
	c = va_arg(ptr_var, int);
	_putchar(c);
	return (0);
}

/**
 * print_string - Print a chain of characters
 * @ptr_var: va_list
 *
 * Return: Always 0
*/

int print_string(va_list ptr_var)
{
	int i;
	char *ptr_string;

	ptr_string = 0;
	*ptr_string = va_arg(ptr_var, int);

	for (i = 0 ; ptr_string[i] != '\0' ; i++)
		_putchar(ptr_string[i]);

	return (0);
}

/**
 * print_percent - Print a % symbol
 * @ptr_var: va_list
 *
 * Return: Always 0
*/

int print_percent(va_list ptr_var)
{
	(void)ptr_var;
	_putchar('%');
	return (0);
}

/**
 * print_decimal - Print a decimal
 * @ptr_var: va_list
 *
 * Return: Always 0
*/

int print_decimal(va_list ptr_var)
{
	char c;
	c = va_arg(ptr_var, int);
	_putchar(c);
	return (0);
}

/**
 * print_integer - Print an integer
 * @ptr_var: va_list
 *
 * Return: Always 0
*/

int print_integer(va_list ptr_var)
{
	char c;
	c = va_arg(ptr_var, int);
	_putchar(c);
	return (0);
}
