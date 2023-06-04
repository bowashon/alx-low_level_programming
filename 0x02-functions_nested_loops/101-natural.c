#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the sum of multiples of 3 and 5
 *
 * Return: returns 0
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
