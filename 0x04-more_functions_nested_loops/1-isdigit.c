#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: parameter to be checked
 * Return: return 1 if parameter is digit
 * and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

