#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that returns a ptr to 2D array of int
 * @width: width of the array
 * @height: height of tje array
 * Each element of the grid should be init to 0
 * Return: NULL on failure
 * If width or height is 0 or negative return NULL
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			free(ptr[j]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
		ptr[i][j] = 0;
		}
	}
	return (ptr);
}
