#include "main.h"
/**
 * _isalpha - This function that checks for lowercase and uppercase character.
 * @c: Checks for character.
 *
 * Return: on Sucess 1
 * On error, 0 is returned
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
