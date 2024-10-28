#include "main.h"
/**
 * print_line - Print numbers from 0 to 14, 10 times.
 *
 * @n: the value to print the line
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void print_line(int n)
{
	int length;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (length = 0; length < n; length++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}