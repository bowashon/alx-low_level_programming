#include "main.h"

/**
 * print_square - prints squares of given size
 *
 * @size: parameter to be printed
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		}
	}
}
