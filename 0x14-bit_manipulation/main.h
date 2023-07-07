#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
void print_binary(unsigned long int n);
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
int set_bit(unsigned long int *n, unsigned int index);
#endif
