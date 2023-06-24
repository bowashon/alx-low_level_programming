#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - funtion that adds two arguments
 * @a: first parameter
 * @b: second parameter
 * Return: return the addition of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function the finds the difference of two integers
 * @a: first integer
 * @b: second integer
 * Return: return the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that finds the product of two integers
 * @a: first integer
 * @b: second integer
 * Return: return the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides an integer by another
 * @a: the dividened
 * @b: the divisor
 * Return: return the quotient of division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that finds the modulus
 * @a: the first integer
 * @b: the divisor
 * Return: return the remainder of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
