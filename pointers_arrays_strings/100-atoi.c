#include "main.h"
/**
 * _atoi- string to integer
 * @s: pointer of s
 * Return: on Sucess 1
 * On error, 0 is returned
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int result = 0;

	while (s[i] == ' ')
		i++;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
		else if (result > 0)
		break;
		i++;
	}

	return (result * sign);
}
