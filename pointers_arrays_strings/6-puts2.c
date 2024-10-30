#include "main.h"
/**
 * puts2 - a pointer
 * @str: string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; str += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
