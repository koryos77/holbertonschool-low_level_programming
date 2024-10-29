#include "main.h"
/**
 * _puts - a pointer
 * @str: string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
