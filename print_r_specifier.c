#include "main.h"

/**
 * print_r - this is a function used to write out a reverse string to the
 * output
 * @arguments: a list of arguemnets passed to the string
 * Return: count
 */
int print_r(va_list arguments)
{
	int i;
	int count = 0;
	int len = 0;

	char *s = va_arg(arguments, char *);

	while (s[len] != '\0')
	{
		len++;
	}
	if (s == NULL)
	{
		s = "(null)";
	}
	else
	{
		for (i = len - 1; i >= 0; i--)
		{
			count = count + write(1, &s[i], 1);
		}
	}
	return (count);
}
