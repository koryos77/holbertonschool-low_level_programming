#include "main.h"
/**
 * _strcat - a pointer to concatenates two int
 * @dest: destination string
 * @src: source string
 * Return: on Sucess 1
 * On error, 0 is returnd
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}

	dest[i] = '\0';

	return (dest);
}
