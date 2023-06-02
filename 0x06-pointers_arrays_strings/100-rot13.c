#include "main.h"

/**
 * root13 - encode string with root13
 * @str: string to consider
 *
 * @return: return a pointer to the string
 */
char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvqxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (str[i] == str1[j])
			{
				str[i] = str2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
