#include "function_pointers.h"
/**
 * print_name - function that print name
 * @name: pointer to the string of name
 * @f: pointer to the function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	else
		f(name);
}
