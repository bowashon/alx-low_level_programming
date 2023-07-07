#include "main.h"
/**
 * print_binary - function that prints binary representation of a number
 * @n: the number to print its binary representation
 *
 */
void print_binary(unsigned long int n)
{
	int bitsize = sizeof(n) * 8;
	int count = 0;

	while (bitsize)
	{
		if (n & 1UL << --bitsize)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar ('0');
	}
	if (!count)
		_putchar ('0');
}
