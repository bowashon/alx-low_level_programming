#include "main.h"

/**
 * is_prime - function helper
 * @n: parameter to check
 * @i: iteration
 * Return: return 1 if prime and 0 if not
 */
int is_prime(int n, int i)
{
	if (n == 1 || n <= 0)
	{
		return (0);
	}
	else if (i < n)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
		{
			return (is_prime(n, i + 1));
		}
	}
	else
	{
		return (1);
	}

}

#include "main.h"

/**
 * is_prime_number - function that finds of a number is prime
 * @n: parameter to check
 * Return: 1 or 0;
 *
 */
int is_prime_number(int n)
{

	return (is_prime(n, 2));
}
