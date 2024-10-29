#include "main.h"
/**
 * _strlen - a pointer
 * @s: string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}
