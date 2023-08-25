#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * print_message - function that print message before the main
 */
void print_message(void) __attribute__((constructor));

void print_message(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
