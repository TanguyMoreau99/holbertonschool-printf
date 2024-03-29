#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
	char *string = "Bonjour Catoche la cantoche";

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%d]\n", ui);
    printf("Unsigned:[%d]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]Character: [%c] %s\n", "I am a string !", 'H', string);
    printf("String:[%s]Character: [%c] %s\n", "I am a string !", 'H', string);
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
	len = _printf("100\n");
    len2 = printf("100\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("String:[%s]\n", "I am a string !");
    len2 = printf("String:[%s]\n", "I am a string !");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("Character: [%c]\n", 'H');
    len2 = printf("Character: [%c]\n", 'H');
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("%s\n", string);
    len2 = printf("%s\n", string);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("String:[%s]Character: [%c] %s\n", "I am a string !", 'H', string);
    len2 = printf("String:[%s]Character: [%c] %s\n", "I am a string !", 'H', string);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf(NULL);
    len2 = printf(NULL);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("%");
    len2 = printf("%");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("%d\n", 100);
    len2 = printf("%d\n", 100);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    len2 = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
