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
	PrintArg output_converter[] = {
		{'s', s_print},
		{'c', print_ch},
		{'b', Ubint_pr},
		{'d', double_print},
		{'i', int_print},
		{'\0', NULL}
};
	int i = 0;
	int count = 0;

	if ('%' == format)
	{
		write(1, "%", 1);
		return (count);
	}

	while (output_converter[i].format != '\0')
	{
		if (output_converter[i].format == format)
		{
			output_converter[i].handler_func(arguments);
			break;
		}
		i++;
	}
	if (output_converter[i].format == '\0')
	{
		write(1, "%", 1);
		write(1, &format, 1);
		count = count + 2;
	}
	return (count);
}
