#include "main.h"
/**
 * _atoi- string to integer
 * @s: pointer of s
 * Return: on Sucess 1
 * On error, 0 is returned
 */

int _atoi(char *s)
{
	unsigned int result = 0;
	unsigned int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	while (*s != '\0')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * result);
}
