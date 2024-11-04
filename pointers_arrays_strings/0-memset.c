#include "main.h"
/**
 * _memset - function fills memory with a constant byte
 * @s: pointer of memory area
 * @b: using char for filling
 * @n: nb of bytes to fill
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
