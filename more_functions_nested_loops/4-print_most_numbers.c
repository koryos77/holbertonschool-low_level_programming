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

	int i = 0;

	while (i < 8)
	{
		_putchar(array[i]);
		i++;
	}
	_putchar ('\n');
	}
}
