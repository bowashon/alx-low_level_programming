#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digits of an integer
 *
 * @n: parameter to be checked
 *
 * Return: return result
 */
int print_last_digit(int n)
{
	int result = 0;

	result = n % 10;

	if (result < 0)
	{
	result *= -1;
	}
	_putchar('0' + result);

	return (result);
}
