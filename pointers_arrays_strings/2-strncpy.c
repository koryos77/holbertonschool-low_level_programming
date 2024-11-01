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

	while (*dest != '\0')
	{
		dest++;
	}

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (Return);
}
