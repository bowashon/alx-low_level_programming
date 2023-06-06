#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the first 50 fibonacci series
 *
 * Return: return always 0 success
 *
 */
int main(void)
{
	int i;
	long long first = 0;
	long long second = 1;
	long long result;

	printf("%lld, %lld,  ", first, second);

	i = 3;
	while (i <= 50)
	{
		if (i > 3)
		{
			printf(", ");
		}
		result = first + second;
		printf("%lld", result);
		first = second;
		second = result;
		i++;
	}
	putchar('\n');
	return (0);
}

