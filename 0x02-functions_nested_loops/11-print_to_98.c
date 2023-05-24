#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from  to 98
 * @n: parameter to be printed
 *
 */
void print_to_98(int n)
{
	int i;
	i = n;

	while (i <= 98)
	{
	if (i < 0)
	{
		_putchar('-');
	}
	if (i <=9)
	{
	_putchar(i + '0');
	_putchar(',');
	_putchar(' ');
	}
	else
	{
	_putchar(i / 10 + '0');
	_putchar(i % 10 + '0');
	_putchar(',');
	_putchar(' ');
	}
	if (i > 98)
	i--;
	else
	i++;
	}
	_putchar('\n');
}

