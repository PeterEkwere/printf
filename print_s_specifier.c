#include "main.h"
#include <string.h>
/**
 * s_print - This is a function that prints the specifier s to STDOUT
 * @arguments: is the arguments to be checked
 * Return: void
 */
void s_print(va_list arguments)
{
	int len;
	char *s = va_arg(arguments, char *);
	int count = 0;

	if (s == NULL)
	{
		write(STDOUT_FILENO, "(null)", 6);
	}
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	count = count + write(STDOUT_FILENO, s, len);
}
