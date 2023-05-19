#include <stdio.h>
#include <stdlib.h>
/**
 * main - print lowercase alphabet in reverse
 *
 * Return: return 0 success
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
