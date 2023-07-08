#include "main.h"
/**
 * get_bit - function that returns the value of a bit
 * at a given index
 * @index: the index at which the value is to be returned
 * Return: returns the value of the bit at the index or
 * -1 if an error occured
 * @n: the number whose value at a given index is required
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	bitmask = 1UL << index;

	return ((n & bitmask) ? 1 : 0);
}
