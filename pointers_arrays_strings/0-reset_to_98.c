#include "main.h"
/**
 * reset_to_98 - a pointer to an int as parameter and updates the value it points to to 98.
 * @n: pointer of n
 *
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void reset_to_98(int *n)
{
	if (n)
	*n = 98;
}