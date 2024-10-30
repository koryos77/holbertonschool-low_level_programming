#include "main.h"
/**
 * print_rev - a pointer
 * @s: string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void print_rev(char *s)
{
int len = _strlen(s);
int i;

for (i = len - 1; i >= 0; i--)
{
	_putchar(s[i]);
}
_putchar ('\n');
}