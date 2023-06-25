#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that sums given input
 * @n: number of input to be given
 * @...: other arguments to be passed
 * Return: returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list user_input;

	va_start(user_input, n);


	for (i = 0; i < n; i++)
	{
		sum += va_arg(user_input, int);
	}

	va_end(user_input);

	return (sum);
}

