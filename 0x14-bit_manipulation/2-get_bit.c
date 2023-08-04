#include "main.h"
/**
 * get_bit - function that gets the bit at an index
 * @n: input parameter
 * @index: index at which the bits is required
 * Return: return the bit at the index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1ul << index;

	if (index > n)
	{
		return (-1);
	}

	if (n & mask)
	{
		return (1);
	}
	else
		return (0);
}
