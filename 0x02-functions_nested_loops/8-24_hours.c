#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - print every minute of the day starting from 00:00 to 23:59
 *
 *
 * Return: return void
 */
void jack_bauer(void)
{
	int i,j,k,l;

	for (i = 0; i <= 2; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	for (k = 0; k <= 5; k++)
	{
	for (l = 0; l <= 9; l++)
	{
	if (i == 2 && j == 4 && k == 0 && l == 0)
	{
			return;
	}
	_putchar('0' + i);
	_putchar('0' + j);
	_putchar(':');
	_putchar('0' + k);
	_putchar('0' + l);
	_putchar('\n');
	}
	}
	}
	}
}
