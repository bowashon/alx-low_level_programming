#include "main.h"
/**
 * clear_bit - function that clears the bit at a particular index
 * @n: the number to clear a bit at its index
 * @index: the index to clear the bit
 * Return: return 1 if success or -1 if otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	*n &= ~mask;

	return (1);
}

