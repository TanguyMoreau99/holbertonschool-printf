#include "main.h"

/**
* _puts - prints a string
* @str: string
* Return: void
*/

void _puts(char *str)
{
	int index;

	for (index = 0 ; str[index] != '\0' ; index++)
		_putchar(str[index]);
}
