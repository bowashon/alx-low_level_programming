#include "main.h"

/**
 * print_triangle - function to print traingle
 * @size: parameter to print
 *
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	for (i = 1; i <= size; i++)
	{
		for (k = size; k >= i; k--)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

