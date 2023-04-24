#include "main.h"
/**
 * print_ch - is a function that handles the c specifier
 * @arguments: is a list of arguments passed to
 * the printf function
 * Return: void
 */
int print_ch(va_list arguments)
{
	char s = va_arg(arguments, int);
	int count = 0;


	count = count + write(1, &s, 1);
	return (count);
}
