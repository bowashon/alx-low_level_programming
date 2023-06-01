#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: return -15 if s1 < s2, 15 if s1 > s2 and 0 if equal
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
		{
			return (-15);
		}
		else if (s1[i] > s2[i])
		{
			return (15);
		}

		i++;
	}

	return (0);
}
