#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints lowercase alphabets to the stdout
 *
 * Return: return 0 success
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	putchar('\n');
	return (0);
}
