#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers from 1 to 100, print Fizz for multiples of 3
 * print Buzz for multiples of 5
 * FizzBuzz for multiples of 3 and 5
 *
 * Return: alway 0 success
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
			printf("%d ", i);
		}
	return (0);
}

