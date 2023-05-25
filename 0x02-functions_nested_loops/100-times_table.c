#include <stdio.h>
#include "main.h"
/**
 * print_times_tabel - print multiples based on the number of n
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
	for (j = 0; j <= n; j++)
	{
		if (j != 0)
		_putchar(',');
		_putchar(' ');
		k = i * j;
		if (k <= 9)
		{
			_putchar(' ');
		_putchar(' ');
		_putchar(k + '0');
		}
		else if (k > 9 && k <= 99)
		{
			_putchar(' ');
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		else if (k >= 100)
		{
			_putchar(k / 100 + '0');
			_putchar((k / 10) % 10 + '0');
			_putchar(k % 10 + '0');
		}
	}
	_putchar('\n');
	}
	}
}
