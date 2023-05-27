#include "main.h"

/**
 * print_number - prints integers to the stdout
 *
 * @n: integer to be printed
 *
 */
void print_number(int n)
{
	unsigned int num = (n < 0) ? -n : n;

	if (n < 0)
	{
		_putchar('-');
	}

	if (num >= 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');

}

