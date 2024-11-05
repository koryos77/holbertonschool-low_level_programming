#include "main.h"
/**
 * _strchr - function that locates a char in a string
 * @s: pointer of string
 * @c: first occurence of the char
 * Return: the iteration from the first occurence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
