#include "main.h"
/**
 * print_most_numbers - Print numbers from 0 to 9, except 2 and 4.
 *
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void print_most_numbers(void)
{
	{
	char array[] = {'0', '1', '3', '5', '6', '7', '8', '9'};

	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(array[i]);
	}
	_putchar ('\n');
	}
}