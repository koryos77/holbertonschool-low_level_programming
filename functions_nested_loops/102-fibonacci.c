#include <stdio.h>
#include "main.h"
/**
 * main - is the main function
 *
 * Return: on success 0
 * On error,1 is returned
 */

int main(void)
{
	int i;
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long next = 0;
	int limit = 50;

	printf("%lu, %lu, ", first, second);
	for (i = 3; i <= limit; i++)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
	}

	printf("\n");

	return (0);
}