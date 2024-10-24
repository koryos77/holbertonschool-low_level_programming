#include <stdio.h>
#include "main.h"
/**
 * _islower - This function that checks for lowercase character.
 * @c: Checks for character.
 *
 * Return: on Sucess 1
 * On error, 0 is returned
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
