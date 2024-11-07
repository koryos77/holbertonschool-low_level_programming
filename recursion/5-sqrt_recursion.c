#include "main.h"
/**
 * _sqrt_helper - recurses to find the natural square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	return (i);
	if (i * i > n)
	return (-1);

	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - function that return the natural square root of int
 * @n: int value
 * Return: factorial given number; if n < 0 return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0 || n == 1)
	return (n);

	return (_sqrt_helper(n, 1));
}
