#include "main.h"
#include <stdio.h>
/**
 * print_array - a pointer to print array
 * @a: pointer
 * @n: number of element to print
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

	}
	if (i < n - 1)
	{
		printf("%d, ", n);
	}
	printf("\n");
}
