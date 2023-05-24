#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints numbers from  to 98
 * @n: parameter to be printed
 *
 */
void print_to_98(int n)
{
	int i;

	i = n;
	if (i > 98)
	{
	for (; i >= 98; i--)
	{
	printf("%d", i);
	if (i != 98)
	printf(", ");
	}
	}
	else
	{
	while (i <= 98)
	{
	printf("%d", i);
	if (i != 98)
	printf(", ");
	i++;
	}
	}
	printf("\n");
}

