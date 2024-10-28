#include "main.h"
/**
 * _isupper - This function that checks for uppercase character.
 * @c: Checks for character.
 *
 * Return: on Sucess 1
 * On error, 0 is returned
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}