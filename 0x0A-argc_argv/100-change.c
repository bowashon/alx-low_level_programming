#include "main.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints minimum number of coin to make
 * change for an amount of money
 * @argc: argument parameter
 * @argv: argument vector array
 * Return: return (0) success
 */
int main(int argc, char *argv[])
{
	int i;
	int mycoins[] = {25, 10, 5, 2, 1};
	int change = 0;
	int money;
	int coins_num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	 money = atoi(argv[1]);

	coins_num = sizeof(mycoins) / sizeof(mycoins[0]);

	if (money < 0)
	{
		printf("0\n");
	}

	for (i = 0; i < coins_num; i++)
	{
		change += money / mycoins[i];
		money %= mycoins[i];
	}

	printf("%d\n", change);
	return (0);
}
