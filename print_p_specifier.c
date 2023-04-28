#include "main.h"

/**
 *  print_P - this is a function used to write out a reverse string to the
 * @arguments: a list of arguments passed to the string
 * Return: count
 */

int print_p(va_list arguments)
{
	void *ptr = va_arg(arguments, void *);

	char buffer[1024];
	int i;
	int count = 0;

	sprintf(buffer, "%p", ptr);

	for (i = 0; buffer[i] != '\0'; i++)
	{
		write(1, &buffer[i], 1);
		count++;
	}
	return (count);
}
