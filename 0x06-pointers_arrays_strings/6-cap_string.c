#include "main.h"

/**
 * cap_string - capitalize each word in a string
 *
 * @s: string parameter
 * Return: return a pointer to the string
 */
char *cap_string(char *s)
{
	int i = 0;
	int needs_to_cap;

	while (s[i])
	{
		if ((needs_to_cap == 1) && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}

		needs_to_cap = (
		s[i] == ' '
		|| s[i] == '\t'
		|| s[i] == '\n'
		|| s[i] == ','
		|| s[i] == ';'
		|| s[i] == '.'
		|| s[i] == '!'
		|| s[i] == '?'
		|| s[i] == '"'
		|| s[i] == '('
		|| s[i] == ')'
		|| s[i] == '{'
		|| s[i] == '}'
		|| (s[i] >= '0' && s[i] <= '9')) ? 1 : 0;

		i++;

	}

	return (s);
}
