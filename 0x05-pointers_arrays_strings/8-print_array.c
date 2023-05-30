#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: pointer to the array
 * @n: size of the array
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
