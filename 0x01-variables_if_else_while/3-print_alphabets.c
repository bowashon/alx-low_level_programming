#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabets in lowercase followed by uppercase
 *
 * Return: return 0 success
 */
int main(void)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
	putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
	putchar(j);
	}
	putchar('\n');
	return (0);
}

