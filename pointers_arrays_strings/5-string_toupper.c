#include "main.h"
/**
 * string_toupper - to change character in uppercase
 * @str : pointer
 * Return: on Sucess 1
 * On error, 0 is returned
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	}
	return (str);
}
