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
	
	for (i = 0; i < n; i++)
	{
		if (i > a[0] && i != a[n-1])
		{
			printf(", ");
		}
		
		printf("%d", a[i]);
	}
	putchar('\n');
}
