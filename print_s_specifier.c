#include "main.h"
#include <string.h>
/**
 * s_print - This is a function that prints the specifier s to STDOUT
 * @arguments: is the arguments to be checked
 * Return: -1 if fail
 */
int  s_print(va_list arguments)
{
	int len;
	const char *s = va_arg(arguments, const char *);
	int count = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	len = 0;
	while (s[len] != '\0')
	{
		write(1, &s[len], 1);
		len++;
		count++;
	}
	return (count);
}
