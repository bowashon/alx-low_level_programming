#include <unistd.h>

/**
 * _putchar - print a single character to the stdout
 *
 * @c: parameter to be printed
 * Return: return 1 and on error return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
