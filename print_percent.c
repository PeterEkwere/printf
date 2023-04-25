#include "main.h"
/**
 * percent_pr - is a function that prints the percent 
 * if format is percent
 * @arguments: is a list of arguments passed to the printf function
 * Return: count
 */
int percent_pr(va_list arguments)
{
	int count = 0;
	char a = va_arg(arguments, int);

	count = count + write(1, &a , 1);
	return (count);
}
