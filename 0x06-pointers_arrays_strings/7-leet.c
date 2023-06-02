#include "main.h"

/**
 * leet - function that encodes a string
 * @s: pointer to the string
 * Return: returns a pointer to the string
 *
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}


