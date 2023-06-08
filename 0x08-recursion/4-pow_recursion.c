#include "main.h"

/**
 * _pow_recursion - function that calculate the exponents of a numbers
 *
 * @x: the base parameter
 * @y: the exponent
 * Return: return the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
