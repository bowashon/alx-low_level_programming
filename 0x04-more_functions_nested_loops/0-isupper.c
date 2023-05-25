#include "main.h"

/**
 * _isupper - checks if input is upper case characters
 *
 * @c: parameter to be checked
 *
 * Return: return 1 if uppercase character and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
	{
		return (0);
	}
}
