#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: format of the type of arguments passedd
 * to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	char *space = " ";

	va_list user_input;

	va_start(user_input, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", space, va_arg(user_input, int));
				break;
			case 'i':
				printf("%s%d", space, va_arg(user_input, int));
				break;
			case's':
			str = va_arg(user_input, char *);
			if (str == NULL)
				printf("(nil)");
			else
			printf("%s%s", space, str);
			break;
			case'f':
				printf("%s%f", space, va_arg(user_input, double));
				break;
			default:
			i++;
			continue;
			}
			if (format[i + 1] != '\0')
			{
				printf(",");
			}
			i++;
	}
	va_end(user_input);
	printf("\n");
}
