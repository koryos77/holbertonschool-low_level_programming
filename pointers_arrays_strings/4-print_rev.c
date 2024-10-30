#include "main.h"
/**
 * print_rev - a pointer
 * @s: string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	while (count > 0)
	{
		_putchar(s[count - 1]);
		count--;
	}
	_putchar('\n');
}
