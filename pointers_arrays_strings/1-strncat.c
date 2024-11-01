#include "main.h"
/**
 * _strncat - a pointer to concatenates two int
 * @dest: destination string
 * @src: source string
 * @n: int n
 * Return: on Sucess 1
 * On error, 0 is returnd
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}

	dest[i] = '\0';

	return (dest);
}