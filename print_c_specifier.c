#include "main.h"
/**
 * print_chr - is a function that handles the c specifier
 * @arguments: is a list of arguments passed to
 * the printf function
 * Return: void
 */
void print_chr(va_list arguments)
{
	int len;
	char s = va_arg(arguments, int);
	int count = 0;

	if (s == '\0')
	{
		write(STDOUT_FILENO, "(null)", 6);
	}
	len = sizeof(char);
	count = count + write(STDOUT_FILENO, &s, len);
}
