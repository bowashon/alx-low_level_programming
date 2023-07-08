#include "main.h"
/**
 * clear_bit - function that sets values of bits ot 0
 * at a given index
 * @n: the value to set to 0.
 * @index: the index at which the value is to be set to 0
 * Return: return 1 if success and -1 if error.
 */
int clear_bit(unsigned long *n, unsigned int index)
{
	unsigned long bitmask;

	if (index >= (sizeof(unsigned long) * 8))
	{
		return (-1);
	}
	bitmask = ~(1UL << index);

	*n &= bitmask;
	return (1);
}

