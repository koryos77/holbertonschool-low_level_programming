#include <stdlib.h>
#include "main.h"
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: array of nmemb element
 * @size: bytes
 * Return: NULL on failure
 * If NULL is passed, treat it as an empty string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned char *str;
	unsigned int total = 0;
	unsigned int i = 0;

	if ((nmemb == 0) || (size == 0))
	return (NULL);

	total = nmemb * size;

	ptr = malloc(total);

	if (ptr == NULL)
	{
		return (NULL);
	}

	str = (unsigned char *)ptr;
	for (i = 0; i < total; i++)
	{
		str[i] = 0;
	}
	return (ptr);
}
