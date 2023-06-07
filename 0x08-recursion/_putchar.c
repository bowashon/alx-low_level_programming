#include <unistd.h>

/**
 * _putchar - prints to the stdout
 * @c: character to be printed
 * Return: return 1 on success and on error return -1
 *
 */
int _putchar(int c)
{
	return(write(1, &c, 1));
}
