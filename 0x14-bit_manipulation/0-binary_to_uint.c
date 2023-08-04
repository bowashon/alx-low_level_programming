#include "main.h"
/**
 * binary_to_uint - function the converts binary to integers
 * @b: the constant binary integer to convert
 * Return: returns the result of the converted binary or 0 if otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{

		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result <<= 1;

		if (*b == '1')
		{
			result |= 1;
		}
		b++;
	}

	return (result);
}
