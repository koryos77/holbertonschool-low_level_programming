#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: the iteration from the first occurence
 */

char *_strstr(char *haystack, char *needle)
{
	int count = 0;
	int i = 0;
	int j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] == haystack[i] && count <= needle[j])
			count++;
			return (needle);
		}
	}
	return (0);
}
