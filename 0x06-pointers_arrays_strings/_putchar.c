#include "main.h"
#include <unistd.h>

/**
 * _putchar - print characters to the stdout
 *
 * @c: parameter to print
 * Return: return 1 success and on error return -1.
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
