#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: the string to be printed between numbers
 * @n: numbers of strings passed to the function
 * if separator is NULL don't print it
 * if one string is null print (nil)
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		printf("%s", str);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
