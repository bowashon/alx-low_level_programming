#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all single digit numbers in base 10
 *
 * Return: return 0 success
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
