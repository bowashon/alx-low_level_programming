#include "main.h"

/**
 * _strncpy - copies string form source to destination
 * @dest: destination file
 * @src: source file
 * @n: number of characters to copy
 * Return: return a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
