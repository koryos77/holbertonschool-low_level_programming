#include "main.h"
/**
 * puts_half - a pointer
 * @str: string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void puts_half(char *str)
{
	int length = 0;
	int half;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		half = length / 2;
	}

	else
	{
		half = (length - 1) / 2;
		half++;
	}

	while (str[half] != '\0')
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');

}
