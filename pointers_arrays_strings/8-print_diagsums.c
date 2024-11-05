#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function that prints the sum of the two diag
 * @a: pointer to the matrice
 * @size: size of the matrice
 * Return: the iteration from the first occurence
 */

void print_diagsums(int *a, int size)
{
	int diagA = 0;
	int diagB = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diagA += a[i * size + i];
		diagB += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", diagA, diagB);
}
