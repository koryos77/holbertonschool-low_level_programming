#include "main.h"
/**
 * print_sign - This function that prints the sign of a number.
 * @n: Checks for character.
 *
 * Return: on Sucess 1
 * On error, 0 is returned
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
