#include <stdio.h>
#include <stdlib.h>
/**
 * main - print numbers in base 16
 *
 * Return: return 0 success
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}


