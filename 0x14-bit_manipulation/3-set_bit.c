#include "main.h"
/**
 * set_bit - function that set the bit at a particular index to 1
 * @n: character parameter to set its value at index to 1
 * @index: the index at which the character is to be set to 1
 * Return: the new value or -1 if otherwise.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1uL << index;
	int result = 0;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	result = *n |= mask;

	return (result);
}
