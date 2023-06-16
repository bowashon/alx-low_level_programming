#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - function that concatenates all the arguments of a program
 * @ac: argument parameter
 * @av: argument vector
 * Return: returns a pointer to the concatenated string
 *
 */
char *argstostr(int ac, char **av)
{
	int i = 1;
	size_t len = 0;
	char *new;
	int j;
	int start = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 1; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}

	new = malloc((len + 1) * sizeof(char));

	if (new == NULL)
	{
		return (NULL);
	}

	for (j = 1; j < ac; j++)
	{
		strcpy(new + start, av[j]);
		start += strlen(av[j]);
		new[start] = '\n';
		start++;
	}
	new[len] = '\0';
	return (new);
}
