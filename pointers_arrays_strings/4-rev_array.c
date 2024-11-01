#include "main.h"
/**
 * reverse_array - a pointer to reverse array
 * @a: int
 * @n: number of element of the array
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end = a + n - 1;
	int temp;

	while (start < end)
	{
	temp = *start;
	*start = *end;
	*end = temp;

	start++;
	end--;
	}
}
