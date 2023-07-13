#include <unistd.h>
/**
 * _putchar - function that writes characters to the stdout.
 * @c: parameter to be passed and character to be written.
 * Return: returns 1 if success and on error -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
