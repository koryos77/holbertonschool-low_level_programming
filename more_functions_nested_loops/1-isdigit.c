#include "main.h"
/**
 * _isdigit - This function that checks for uppercase character.
 * @c: Checks for character.
 *
 * Return: on Sucess 1
 * On error, 0 is returned
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
