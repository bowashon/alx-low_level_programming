#include "main.h"
/**
 * _putchar - function that writes character to the stdout
 * @z: character to write
 * Return: return 1 if success and on error return -1.
 */
int _putchar(char z)
{
	return (write(1, &z, 1));
}
