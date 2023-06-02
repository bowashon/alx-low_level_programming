#include "main.h"

/*
 * print_number - prints integers
 *
 * @n: parameter to print
 *
 */
void print_number(int n)
{
	unsigned num = n;

	if (n < 0)
	{
		_putchar('-');
		num = - n;
	}
	if (n >= 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
