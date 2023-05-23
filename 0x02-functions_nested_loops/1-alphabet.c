#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - function that print alphabet in lowercase
 *
 * Return: return void
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{

	_putchar(i);
	i++;
	}

	_putchar('\n');
}
