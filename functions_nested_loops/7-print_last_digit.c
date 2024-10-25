#include "main.h"
/**
 * print_last_digit - This function that prints the last digit.
 * @r: Checks for character.
 *
 * Return: on Sucess 1
 * On error, 0 is returned
 */

int print_last_digit(int r)
{
	int last_digit;

	last_digit = r % 10;
	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar('0' + last_digit);
	return (last_digit);
}
