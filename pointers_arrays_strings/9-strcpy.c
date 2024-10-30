#include "main.h"
/**
 * _strcpy- a pointer copy
 * @dest: destination
 * @src: source
 * Return: on Sucess 1
 * On error, 0 is returned
 */

char *_strcpy(char *dest, char *src)
{
	char *Return = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (Return);
}
