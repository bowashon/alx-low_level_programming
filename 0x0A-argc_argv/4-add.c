#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - function that adds positive numbers
 * @argc: argument parameter
 * @argv: argument vector aray
 * Return: return 1 if error and 0 if success
 *
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	while (i < argc)
	{
		int j = 0;
		char *arg = argv[i];

		if (!isdigit(arg[j]))
		{

		printf("Error\n");

		return (1);
		}
		sum += atoi(arg);
		j++;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
