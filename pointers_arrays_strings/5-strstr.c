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

	if (*needle == '\0')
	return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
				break;
			}
			if (needle[j] == '\0')
			return (&haystack[i]);
		}
	}
	return (0);
}
