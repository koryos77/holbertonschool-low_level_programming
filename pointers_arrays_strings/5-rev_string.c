#include "main.h"
/**
 * rev_string - a pointer to reverse a string
 * @s: string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	char reversed[446];

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		reversed[i] = s[length - 1 - i];
	}
	reversed[length] = '\0';

	for (i = 0; i <= length; i++)
	{
		s[i] = reversed[i];
	}
}
