#include <stdio.h>
#include "main.h"
/**
 * _isalpha - check if character is alphabet
 *
 * @c: character to be checked
 *
 * Return: return 1 if its alphabet else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}

