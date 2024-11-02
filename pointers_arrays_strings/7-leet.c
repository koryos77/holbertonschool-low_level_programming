#include "main.h"
/**
 * leet- a pointer to encode with leet
 * @str: point to string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

char *leet(char *str)
{
	char *ptr = str;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (ptr);
}
