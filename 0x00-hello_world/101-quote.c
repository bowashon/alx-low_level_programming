#include<stdio.h>
/**
 * main - print to standard out
 * fput - function to prints to stdout
 * Return: return 1 success
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fputs(s, stdout);
	putchar('\n');
	return (1);
}
