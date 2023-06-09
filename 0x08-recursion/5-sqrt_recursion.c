#include "main.h"

/**
 *  _sqrt_recursion_1 - function  that prints square root of a function
 * @n: parameter to be checked
 * @mid: mid point number
 * Return: an integer of the sqrt
 */

int _sqrt_recursion_1(int n, int mid)
{
	int square_rot = mid * mid;

	if (square_rot == n)
	{
		return (mid);
	}
	else if (square_rot > n)
	{
		return (-1);
	}
	else
	return (_sqrt_recursion_1(n, mid + 1));

}


/**
 * _sqrt_recursion - function the calculate the natural square root of a number
 * @n: parameter whose square root is to be calculated
 * Return: returns the natural square root of a number
 *
 */
int _sqrt_recursion(int n)
{

	return (_sqrt_recursion_1(n, 1));
}

