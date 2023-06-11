#include <unistd.h>

/**
 * _putchar - prints to stdout
 *
 * @c: parameter to be priinted
 *
 * Return: return 1 on success and on error return 1
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
