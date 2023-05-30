#include "main.h"

/**
 * puts_half - prints the second half of a string to a pointer
 *
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int i;
	int len = 0;
	int half_len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	half_len = len % 2 == 0 ? len / 2 : (len - 1) / 2;
	
	for (i = half_len; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
