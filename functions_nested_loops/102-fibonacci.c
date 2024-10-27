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
	int first = 1;
	int second = 2;
	int next = 0;
	int limit = 50;

	printf("%d, %d, ", first, second);

	for (i = 3; i <= limit; i++)
	{
		next = first + second;
		printf("%d, ", next);
		first = second;
		second = next;
	}
	printf("\n");
	return (0);
}