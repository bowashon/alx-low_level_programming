#include "main.h"

/**
 * factorial - function that print factorial of a number
 * @n: parameter to be checked
 * Return: return the factorial of a number
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
