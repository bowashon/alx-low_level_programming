#include "main.h"

/**
 * rev_string - reverse a stringe
 *
 * @s: pointer to the string
 */
void rev_string(char *s)
{
	int temp;
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len = len - 1;

	while (i < len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;

		i++;
		len--;
	}

}





