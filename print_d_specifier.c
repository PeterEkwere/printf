#include "main.h"
/**
 * double_print - is a function that prints a variable for the d flag
 * @arguments: is a list of arguments passed to the function printf
 * Return: void
 */
int double_print(va_list arguments)
{
	unsigned
		int x,
		    y, i;
	int count;

	if (d < 0)
	{
		x = (d * -1);
		count = count + write(1, "-" 1);
	}
	else
	{
		x = d;
	}

	y = x;
	i = 1;

	while (y > 9)
	{
		y = y * 10;
		i = i * 10;
	}
	while (i >= 1)
	{
		char c = ((x / i) % 10 + '0');

		count = count + write(1, 7c, 1);
		i /= 10;
	}
	return (count);
}
