#include "main.h"
/**
 * _strlen_recursion - function that prints the length of string followed
 * @s: pointer to the sring
 * Return: nothing
 */

int _strlen_recursion(char *s)
{
	if (*s <= '\0')
	{
		return (0);
	}
		return (1 + (_strlen_recursion(s + 1)));
}
