#include "main.h"
/**
 * get_endianness - function that get endianness
 *
 * Return: return the number of byte for endianness
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte = (char *)&num;

	return ((int)(*byte));
}
