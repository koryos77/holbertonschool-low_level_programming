#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of int
 * @min: min value (included)
 * @max: max value (included)
 * Return: NULL if min > max; the pointer to the newly created array
 * If malloc fails return NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int i = 0;

	if (min > max)
	return (NULL);

	while (i >= min && i <= max)
	i++;

	array = malloc(sizeof(int) * i);

	if (array == NULL)
	return (NULL);

	for (i = 0; i >= min && i <= max; i++)
	array[i] = i;

	return (array);
}
