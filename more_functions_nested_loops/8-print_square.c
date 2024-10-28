#include "main.h"
/**
 * print_square - Print numbers from 0 to 14, 10 times.
 *
 * @size: the size of the square
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
