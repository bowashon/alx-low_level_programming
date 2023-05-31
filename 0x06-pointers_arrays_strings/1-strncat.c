#include "main.h"

/**
 * _strncat - concatenates n characters to destination
 * @dest: destination file
 * @src: source file
 * @n: number of characters to append
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	 int i = 0;
	 int len1 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[len1 + i] = src[i];
	}

	dest[len1 + i] = '\0';

	return (dest);
}
