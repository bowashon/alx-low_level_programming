#include <stdio.h>
#include <stdlib.h>
/**
 * main - function to print sum of multiples of 3 and 5
 *
 * Return: return 0
 */
int main(void)
{
	int i;
	int sum = 0;
	
	for (i = 1; i < 1024; i++)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
		sum += i;
	}
	printf("%d", sum);
	}
	printf("\n");
}

