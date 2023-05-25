#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes to stdout
 * @c: parameter to be output
 * Return: return 1
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
