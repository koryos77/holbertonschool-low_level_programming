#include "main.h"
/**
 * puts_half - a pointer
 * @str: string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void puts_half(char *str)
{
	int i = 5;

	for (; str[i] != '\0'; str++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
