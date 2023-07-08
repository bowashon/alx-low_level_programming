#include "main.h"
/**
 * get_endianness - function that checks endianness.
 *
 * Return: returns 1 if big eidian and  0 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr;

	ptr = (char *)&num;

	if (*ptr == 1)
	{
		return (1);
	}
	return (0);
}
