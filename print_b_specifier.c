#include "main.h"

/**
 * Ubint_pr - is afunction that prints the binary version.
 * @n: number checked
 * Return: binary unsigned int
 */
int Ubint_pr(int n)
{
	unsigned int a, index, index2;
	unsigned int sum = 0;
	unsigned int num[32];
	int count = 0;
	char s;

	a = 2147483648;
	num[0] = n / a;

	for (index = 1; index < 32; index++)
	{
		a = (a / 2);
		num[index] = (n / a) % 2;
	}

	for (index2 = 0; index2 < 32; index2++)
	{
		sum = sum + num[index2];
		if (sum != 0 || index2 == 31)
		{
			s = num[index2] + '0';
			count = count + write(1, &s, 1);
		}
	}
	return (count);
}
