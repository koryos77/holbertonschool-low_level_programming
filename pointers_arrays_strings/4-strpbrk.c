#include "main.h"
/**
 * _strpbrk - function that searches a string
 * @s: string where I look
 * @accept: string of needed char
 * Return: the iteration from the first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}
