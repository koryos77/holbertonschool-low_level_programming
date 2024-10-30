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

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
