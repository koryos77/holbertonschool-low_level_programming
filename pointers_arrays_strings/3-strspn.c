#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer of main string
 * @accept: string of needed char
 * Return: the iteration from the first occurence
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int count = 0;
	int i;
	int j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				count++;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}
	}
	return (count);
}
