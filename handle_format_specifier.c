#include "main.h"
/**
 * handle_format_specifier - is a function that returns the coresponding,
 * function of a format
 * @format: is a a character that specifies the
 * datatype of the args to add to the string
 * @arguments: is a list of  arguments
 * Return: void
 */

void handle_format_specifier(char format, va_list arguments)
{
	PrintArg output_converter[] = {
		{"s", s_print},
		{"c", print_ch},
		{NULL, NULL}
};
	int i = 0;

	while (*output_converter[i].format != '\0')
	{
		if (output_converter[i].format[0] == format)
		{
			output_converter[i].handler_func(arguments);
			break;
		}
		i++;
	}
}
