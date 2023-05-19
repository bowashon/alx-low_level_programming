#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number combination
 *
 * Return: return 0 success
 */
int main(void)
{
	int i;
	int k;

	for (i = 0; i < 9; i++)
	{
	for (k = i; k <= 9; k++)
	{
	putchar(i + '0');
	putchar(k + '0');
	if (i != 8 || k != 9)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
