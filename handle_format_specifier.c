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
	const PrintArg output_converter[] = {
		{'%', percent_pr},
		{'s', s_print},
		{'c', print_ch},
		{'b', Ubint_pr},
		{'d', double_print},
		{'i', int_print},
		{'u', uint_print},
		{'o', print_o},
		{'X', print_X},
		{'x', print_hex}
};
	unsigned int i = 0;
	int count = 0;

	if ('%' == format)
	{
		write(1, "%", 1);
		return (count);
	}

	while (i < (sizeof(output_converter) / sizeof(PrintArg)))
	{
		if (output_converter[i].format == format)
		{
			return (output_converter[i].handler_func(arguments));
		}
		i++;
	}

	write(1, "%", 1);
	write(1, &format, 1);
	count = count + 2;
	return (count);
}
