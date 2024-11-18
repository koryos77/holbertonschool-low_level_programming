#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an int
 * @size: size is the number of elements in array
 * @cmp: pointer to the function to be used to compare values
 * @array: pointer to the array
 * Return: -1 if no element matches, and if size <= 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
	return (-1);

	if (array == NULL || cmp == NULL)
	return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);
}
