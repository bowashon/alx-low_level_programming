#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint -function that convets binary to unit
 * @b: string to convert
 * Return: converted unit.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;


	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		unit = unit * 2 + (*b - '0');
		b++;
	}
	return (unit);
}

