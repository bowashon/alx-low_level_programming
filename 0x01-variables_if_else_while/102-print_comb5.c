#include <stdio.h>
#include <stdlib.h>
/**
 * main - produce combinations
 *
 * Return: return 0 success
 */
int main(void)
{
	int i;
	int k;

	for (i = 0; i <= 98; i++)
	{
	for (k = i + 1; k <= 99; k++)
	{
	putchar('0' + (i / 10));
	putchar('0' + (i % 10));
	putchar(' ');
	putchar('0' + (k / 10));
	putchar('0' + (k % 10));
	if (i < 98 || k < 99)
	{
	putchar(',');
	putchar(' ');

	}
	}
	}
	putchar('\n');
	return (0);
}
