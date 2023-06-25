#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers.
 * @separator: string that separate numbers.
 * @n: number of user input.
 * @...: other parameters to be inputer by user.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list user_input;
	int num;

	if (separator == NULL)
	{
		return;
	}

	va_start(user_input, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(user_input, int);

		printf("%d", num);

		if (separator != NULL && i != n - 1)
		{
			printf("%s ", separator);
		}
	}
	printf("\n");

	va_end(user_input);
}
