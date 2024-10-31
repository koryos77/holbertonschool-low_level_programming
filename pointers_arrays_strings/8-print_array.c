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
	for (n = 0; n < 5; n++)
	{
		printf("%d ,", a[n]);
	}
	printf("\n");
}
