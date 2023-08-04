#include "main.h"
/**
 * _putchar - function that prints character to the stdout.
 * @z: character parameter to write.
 * Return: return the character written.
 */
int _putchar(char z)
{
	return(write(1, &z, 1));
}
