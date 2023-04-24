#include "main.h"
/**
 * int_print - is a function that prints a variable for the i
 * format specifier
 * @arguments: is a list of arguments passed to the function printf
 * Return: void
 */
int int_print(va_list arguments)
{
	int d = va_arg(arguments, int);
	int digit[20];
	int count = 0;
	int j = 0;
	int i = 0;
	char c;

	if (d < 0)
	{
		count = count + write(1, "-", 1);
		d = -d;
	}
	if (d == 0)
	{
		count = count + write(1, "0", 1);
	}
	while (d > 0)
	{
		digit[i] = d % 10 + '0';
		d /= 10;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		c = digit[j];
		count = count + write(1, &c, 1);
	} return (count);
}
