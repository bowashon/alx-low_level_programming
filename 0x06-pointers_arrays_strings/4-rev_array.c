#include "main.h"

/**
 * reverse_array - reverse a given array
 * @a: pointer to the array
 * @n: size of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;


	while (i < n)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
