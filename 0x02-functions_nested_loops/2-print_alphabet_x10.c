#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets in lowercase 10 times
 *
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	int i;

	char j;

	for (i = 0; i <= 9; i++)
	{
	for (j = 'a'; j <= 'z'; j++)
	{
	_putchar(j);
	}
	_putchar('\n');
	}
}

