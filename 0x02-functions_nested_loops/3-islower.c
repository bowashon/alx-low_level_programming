#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lowercase letters
 *
 * @c: character to be checked
 *
 * Return: return 1 if is lower else 0
 */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
