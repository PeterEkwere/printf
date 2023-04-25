#include "main.h"

/**
 * print_X - this function takes an argument int and prints the hex format
 * @arguments: is the list of arguments that will be used in the printf fnx
 * Return: count
 */
int print_X(va_list arguments)
{
	static const char hex[] = "0123456789ABCDEF";

	static char buffer[1024];
	int count = 0;
	char *ptr = &buffer[1023];
	unsigned int a = va_arg(arguments, unsigned int);
	*ptr = '\0';

	do {
		*--ptr = hex[a % 16];
		a = a / 16;
	} while (a != 0);

	while (*ptr != '\0')
	{
		count = count +  write(1, ptr, 1);
		ptr++;
	}

	return (count);
}
