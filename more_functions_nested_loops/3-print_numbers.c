#include "main.h"
/**
 * print_numbers - This function print numbers from 0 to 9.
 *
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void print_numbers(void)
{
	char array[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(array[i]);
	}
	_putchar ('\n');
}
