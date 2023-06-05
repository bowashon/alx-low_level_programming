#include "main.h"

/**
 * _memset - fills memory with a constant byte;
 *
 * @s: pointer buffer
 *
 * @b: constant allocation
 *
 * @n: size of memory to be set
 *
 * Return: returns a point to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
