#include "main.h"
/**
 * handle_format_specifier - is a function that returns the coresponding,
 * function of a format
 * @format: is a a character that specifies the
 * datatype of the args to add to the string
 * @arguments: is a list of  arguments
 * Return: void
 */

int handle_format_specifier(char format, va_list arguments)
{
	int count = 0;

	switch (format)
	{
		case '%':
			write(1, "%", 1);
			break;
		case 's':
			count = count + s_print(arguments);
			break;
		case 'c':
			count = count + print_ch(arguments);
			break;
		case 'd':
			count = count + double_print(arguments);
			break;
		case 'i':
			count = count + int_print(arguments);
			break;
		default:
			write(1, "%", 1);
			write(1, &format, 1);
			count = count + 2;
			break;
	}
			return (count);
}
