#include "main.h"
/**
 * flip_bits - function that returns the number of bits required to
 * flip from one number to another
 * @n: the first number  to flip from
 * @m: number to flip to
 * Return: returns the number required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count = 0;

	xor_result = n ^ m;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
