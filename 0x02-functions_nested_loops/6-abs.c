#include <stdio.h>
#include "main.h"
/**
 * _abs - returns absolute values of an number
 * @n: parameter to be checked
 *
 * Return: return absolute value
 */
int _abs(int n)
{

	if (n > 0)
	{
	return (n);
	}
	else if (n < 0)
	{
	return (-n);
	}
	return (0);
}
