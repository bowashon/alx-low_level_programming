#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes characters to stdout
 * @c: parameter to write
 * Return: return 1 success on error return -1
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}
