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
	char *Return = dest;
	int i = 0;

	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (Return);
}