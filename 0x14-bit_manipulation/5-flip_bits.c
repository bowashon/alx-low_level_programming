#include "main.h"
/**
 * flip_bits - function the returns the number of bits required to flip
 * to get to another number.
 * @n: the number to flip from.
 * @m: the number to flip to
 * Return: returns the number of bits required to flip
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR_result = n ^ m;
	unsigned int count = 0;

	while (XOR_result)
	{
		XOR_result &= (XOR_result - 1);
		count++;
	}
	return (count);
}
