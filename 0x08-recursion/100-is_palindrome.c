#include "main.h"

/**
 * strlen - function that finds the length of a string
 * @s: pointer to the string
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

/**
 * is_match - compares string form it beginning and its end
 * @s: pointer to the string
 * @s1: first parameter to check
 * @s2: second parameter to check
 * Return: return 1 if its mathes or 0 if otherwise
 *
 */
int is_match(char *s, int s1, int s2)
{
	if (s1 >= s2)
	{
		return (1);
	}
		if (s[s1] != s[s2])
		{
			return (0);
		}
		return (0 + is_match(s, s1 + 1, s2 - 1));
}

/**
 * is_palindrome - function that checks if a string is palindrom
 * @s: pointer to the string
 * Return: return 1 if palindrome or 0 if false
 *
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
	{
		return (1);
	}

	return ((is_match(s, 0, _strlen(s - 1))));
}
