#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: the iteration from the first occurence
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (&needle[i]);
			}
		}
	}
	return (0);
}