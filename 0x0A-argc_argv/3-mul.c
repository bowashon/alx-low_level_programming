#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that multiplies two numbers.
 * @argc: arguement command-line
 * @argv: arguement vector array
 * Return: return 1 if argument is less than 2
 * return 0 on success
 */
int main(int argc, char *argv[])
{
	int result;
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}

