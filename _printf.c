#include "main.h"
/**
 * _printf - This is a function that prints a format to the stdout
 * @format: is a pointer to an array of char
 * Return: an integer if correct
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int count = 0;
	int i = 0;

	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
	{
		return (-1);
	}
	else if (format[i] == '%' && !format[i + 1])
	{
		return (-1);
	}
	else if (!format[i])
	{
		return (0);
	}
	va_start(arguments, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			handle_format_specifier('c', arguments);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			handle_format_specifier('s', arguments);
			i++;
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			handle_format_specifier('d', arguments);
			i++;
		}
		else
		{
			count = count + write(STDOUT_FILENO, &format[i], 1);
		}
	} va_end(arguments);
	return (count);
}
