#include "main.h"
/**
 * print_diagonal - Print numbers from 0 to 14, 10 times.
 *
 * @n: the value to print the line
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void print_diagonal(int n)
{
	int length;
	int space;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
		for (length = 0; length < n; length++)
		{
			for (space = 0; space < length; space++)
			{
			_putchar(' ');
			}
		_putchar(92);
		_putchar('\n');
		}
	}
}
