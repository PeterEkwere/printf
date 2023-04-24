#include "main.h"
/**
 * int_print - is a function that prints a varible argumen
 * @arguments: is a list of variables passed to the function
 * Return: count
 */
int int_print(va_list arguments)
{
	unsigned int x, y, i;
	int count = 0;

	int d = va_arg(arguments, int);

	if (d < 0)
	{
		x = (d * -1);
		count = count + write(1, "-", 1);
	}
	else
	{
		x = d;
	}

	y = x;
	i = 1;

	while (y > 9)
	{
		y = y / 10;
		i = i * 10;
	}
	while (i >= 1)
	{
		char c = ((x / i) % 10 + '0');

		count = count + write(1, &c, 1);

		i = i / 10;
	} return (count);
}
