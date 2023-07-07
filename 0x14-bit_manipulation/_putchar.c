#include "main.h"
/**
 * _putchar - function that prints character to the stdout.
 * @c: character to be printed.
 * Return: return 1 if success and -1 if error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
