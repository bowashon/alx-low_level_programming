#include "main.h"

/**
 * print_line - funtion to print line to stdout
 *
 *  @n: parameter to print
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
	}
}
