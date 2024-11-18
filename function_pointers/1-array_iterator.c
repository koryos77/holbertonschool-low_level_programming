#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes parameters of array
 * @size: size of the array
 * @action: pointer to the function
 * @array: pointer to the array
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL)
	return;

	if (action == NULL)
	return;

	if (size == 0)
	return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
