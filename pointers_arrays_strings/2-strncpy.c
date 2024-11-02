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

	while (n > 0)
	{
		if (*src != '\0')
		{
			*dest = *src;
			src++;
		}
		else
		{
			*dest = '\0';
		}
		dest++;
		n--;
	}
	return (Return);
}
