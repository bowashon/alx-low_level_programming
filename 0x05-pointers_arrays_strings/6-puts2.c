#include "main.h"

/**
 * puts2 - print every other function starting from the first character
 *
 * @str: parameter to print
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);

		len += 1;
		len++;
	}
	_putchar('\n');
}
