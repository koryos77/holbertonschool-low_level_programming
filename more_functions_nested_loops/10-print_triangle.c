#include "main.h"
/**
 * print_triangle - Print numbers from 0 to 14, 10 times.
 *
 * @size: the size of the triangle
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void print_triangle(int size)
{
	int i;
	int j;

		if (size <= 0)
		{
		_putchar('\n');
		return;
		}

	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < size - i; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
