#include "main.h"
/**
 * print_binary - function that prints the binary representation of an integer
 * @n: unsigned long integer whose binary is to be printed.
 */
void print_binary(unsigned long int n)
{
	int num_of_bit = sizeof(n) * 8;
	int printed_char = 0;
	unsigned long int mask;

	while (num_of_bit)
	{
		mask = 1ul << (num_of_bit - 1);
		if (n & mask)
		{
			_putchar('1');
			printed_char++;
		}
		else if (printed_char)
		{
			_putchar ('0');
		}
		num_of_bit--;
	}
	if (!printed_char)
	{
		_putchar('0');
	}
}
