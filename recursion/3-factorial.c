#include "main.h"
/**
 * factorial - function that return the factorial given number
 * @n: the int
 * Return: factorial given number; if n < 0 return -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
