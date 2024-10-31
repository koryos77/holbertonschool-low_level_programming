#include "main.h"
/**
 * puts_half - a pointer
 * @str: string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void puts_half(char *str)
{
	int i = 0;
	int length = *str;
	int middle = length / 2 + (length % 2 != 0);


	for (i = 0; i < middle; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
