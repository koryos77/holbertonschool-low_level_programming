#include "main.h"
/**
 * cap_string- a pointer to capitalize all words of a string
 * @str: point to string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

char *cap_string(char *str)
{
		char *first = str;

		if (*first >= 'a' && *first <= 'z')
		{
			*first -= 32;
		}

		while (*first)
		{
			if (*first == ' ')
			{
				first++;

				if (*first >= 'a' && *first <= 'z')
				{
					*first -= 32;
				}
			}
			else
			{
				first++;
			}
		}
	return (str);
}
