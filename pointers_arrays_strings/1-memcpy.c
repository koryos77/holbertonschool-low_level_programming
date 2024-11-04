#include "main.h"
/**
 * _memcpy - function copies memories area
 * @dest: pointer of memory area
 * @src: source memory area
 * @n: nb of bytes to fill
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;


	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
