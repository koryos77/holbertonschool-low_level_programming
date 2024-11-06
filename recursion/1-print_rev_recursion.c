#include "main.h"
/**
 * _print_rev_recursion - function that prints a reversed string followed
 * @s: pointer to the sring
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s <= '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar (*s);
}
