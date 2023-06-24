#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - function that performs operation on arguments
 * passed to it
 * @argc: command line arguments
 * @argv: vector array to command line argument
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int result = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");

		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
		&& atoi(argv[3]) == 0)
	{
		printf("Error\n");

		exit(100);
	}

	num1 = atoi(argv[1]);

	num2 = atoi(argv[3]);

	result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);
	return (0);
}
