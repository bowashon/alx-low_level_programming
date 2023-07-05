#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints opcodes
 * @argc: command line arguments supplied
 * @argv: array pointers to the supplied arguments
 * Return: return 0.
 */
int main(int argc, char *argv[])
{
	int numbytes, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numbytes = atoi(argv[1]);

	if (numbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < numbytes; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == numbytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
