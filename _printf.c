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

	if (format == NULL)
	{
		return (-1);
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
		else
		{
			count = count + write(STDOUT_FILENO, &format[i], sizeof(char));
		}
	}
	va_end(arguments);
	return (count);
}
