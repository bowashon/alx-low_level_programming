#include "main.h"
#include <stdio.h>

/**
 * main - program that prints arguments it receives
 * @argc: argument parameter
 * @argv: argument parameter
 * Return: return 0 success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;

	}
	return (0);
}
