#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print multiples based on the number of n
 * @n: parameter to imput multiples
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
	{
		return;
	}
	else
	{
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
	for (j = 1; j <= n; j++)
	{
		_putchar(',');
		_putchar(' ');
		k = i * j;
		if (k >= 100)
		{
			_putchar((k / 100) + '0');
			_putchar((k / 10) % 10 + '0');
			_putchar(k % 10  + '0');
		}
		else if (k >= 10)
		{
			_putchar(' ');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
		}
	}
	_putchar('\n');
	}
	}
}
