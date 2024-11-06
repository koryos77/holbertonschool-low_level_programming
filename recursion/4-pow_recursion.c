#include "main.h"
/**
 * _pow_recursion - function that return the value of x power y
 * @x: value
 * @y: power
 * Return: factorial given number; if n < 0 return -1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	return (1);
	else if (y < 0)
	return (-1);
	else
	return (x * _pow_recursion(x, y - 1));
}
