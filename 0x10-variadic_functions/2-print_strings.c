#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints string passed as user input
 * @separator: deliminator to separate strings
 * @n: number of strings to pass
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	char *str;

	va_list user_input;

	va_start(user_input, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(user_input, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", str);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(user_input);
	printf("\n");
}
