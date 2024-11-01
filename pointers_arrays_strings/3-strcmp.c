#include "main.h"
/**
 * _strcmp - a pointer to compare string
 * @s1: string 1
 * @s2: string 2
 * Return: on Sucess 1
 * On error, 0 is returned
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] != s2[j])
		{
			return (s1[i] - s2[j]);
		}
	i++;
	j++;
	}
	return (s1[i] - s2[j]);
}
