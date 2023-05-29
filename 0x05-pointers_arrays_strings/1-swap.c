#include "main.h"

/**
 * swap_int - swaps to integers assigned to two pointers
 * @a: one parameter to swap
 * @b: the other parameter
 */
void swap_int(int *a, int *b)
{
	int hold;

	hold = *a;

	*a = *b;
	*b = hold;
}
