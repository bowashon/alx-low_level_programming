#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: argument to the command line
 * @argv: character array
 * Return: return 0, success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int num = ((argc - 1) + '0');

	printf("%d\n", num);

	return (0);
}

