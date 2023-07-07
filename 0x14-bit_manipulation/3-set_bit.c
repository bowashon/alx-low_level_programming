#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1
 * at a given index.
 * @n: the value to set its bit to 1 at the given index.
 * @index: index at which to set the value to 1.
 * Return: return 1 if true and -1 if otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	bitmask = 1UL << index;
	*n |= bitmask;
	return (1);
}
