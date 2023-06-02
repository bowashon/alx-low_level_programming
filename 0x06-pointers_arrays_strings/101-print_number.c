#include "main.h"

/**
 * print_number - prints integers
 *
 * @n: parameter to print
 *
 */
void print_number(int n)
{
	unsigned int num = (n < 0) ? -n : n;

	if (n < 0)
	{
		_putchar('-');
	}
	if ((num / 10) > 0)

		print_number(num / 10);

	_putchar((num % 10) + '0');
}
