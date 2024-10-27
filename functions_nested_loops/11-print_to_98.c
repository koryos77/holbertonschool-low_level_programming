#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - This function print all number to 98
 * @n: new int
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
			printf("98\n");
	}
}
