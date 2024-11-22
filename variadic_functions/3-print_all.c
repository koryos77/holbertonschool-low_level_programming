#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - function that prints character
 * @args: argument
 * Return: Nothing
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * print_int - function that prints int
 * @args: argument
 * Return: Nothing
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_float - function that prints float
 * @args: argument
 * Return: Nothing
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_str - function that prints string
 * @args: argument
 * Return: Nothing
 */

void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that prints strings
 * @format: is a list of types of arguments passed to the function
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	fmt f[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}};

	va_list args;
	int i = 0;
	int j;
	char *separator = "";

	va_start(args, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (f[j].str)
		{
			if (f[j].str == format[i])
			{
				printf("%s", separator);
				f[j].print(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
