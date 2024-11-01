#include "main.h"
/**
 * _strncpy- a pointer copy and n bytes
 * @dest: destination
 * @src: source
 * @n: add n bytes
 * Return: Return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
