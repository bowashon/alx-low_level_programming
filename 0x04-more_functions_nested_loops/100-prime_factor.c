#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * main - function to print largest prime factor of a given numberr
 *
 *
 * Return: return 0 success
 */

int main(void)
{
	long int num = 612852475143;
	int fac;
	int largest_prime_fac = 1;
	double square = sqrt(num);

	while (num % 2 == 0)
	{
		largest_prime_fac = 2;

		num = num / 2;
	}

	for (fac = 3; fac <= square; fac += 2)
	{
		while (num % fac == 0)
		{
			largest_prime_fac = fac;

			num = num / fac;
		}
	}

	if (num > largest_prime_fac)
	{
		largest_prime_fac = num;
	}

	printf("%d", largest_prime_fac);

	return (0);
}


