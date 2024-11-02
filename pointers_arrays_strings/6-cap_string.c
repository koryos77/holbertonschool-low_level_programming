#include "main.h"
/**
 * cap_string- a pointer to capitalize all words of a string
 * @str: point to string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

char *cap_string(char *str)
{
	int capNext = 1;
	char *ptr = str;
	char spec[] = " \t\n,;.!?\"(){}";
	int i;


	while (*ptr)
	{
		for (i = 0; spec[i]; i++)
		{
			if (*ptr == spec[i])
			{
				capNext = 1;
				break;
			}
		}
			if (capNext && *ptr >= 'a' && *ptr <= 'z')
			{
				*ptr -= 32;
				capNext = 0;
			}
			else
			{
				capNext = 0;
			}
			ptr++;

	}
	return (str);
}
