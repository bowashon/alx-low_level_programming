#include "main.h"

/**
 * _puts - prints to stdout
 * @str: pointer to the string
 *
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);

		len++;
	}
	_putchar('\n');
}

