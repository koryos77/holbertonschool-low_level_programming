#include "main.h"
/**
 * swap_int - a pointer
 * @a: pointer of a
 * @b: pointer of b
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
