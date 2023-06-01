#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: return 0.
 */
int main(void)
{
	char str[] = "look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	printf("%s", str);

	return (0);
}
