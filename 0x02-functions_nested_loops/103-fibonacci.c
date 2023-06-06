#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that finds and print even numbers < 4000000 in the fibonicci series.
 *
 * Return: return 0 (success)
 *
 */
int main(void)
{
	int count;
	long long first = 0;
	long long second = 1;
	long long next_val = 0;
	long long sum = 0;

	count = 3;

	while (count < 100)
	{
		next_val = first + second;
		if (next_val % 2 == 0)
		{
			sum += next_val;
		}

		if (sum > 4000000)
		{
			break;
		}
		printf("%lld, ", sum);

		first = second;
		second = next_val;
		count++;
	}
	putchar('\n');
	return (0);
}

