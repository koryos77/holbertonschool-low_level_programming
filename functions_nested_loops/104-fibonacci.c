#include <stdio.h>
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
	unsigned long sec = 2;
	unsigned long next = 0;
	int limit = 98;

	printf("%lu", first);

	if (limit >= 2)
	printf(", %lu", sec);

	for (i = 3; i <= limit; i++)
	{
		next = first + sec;
		printf(", %lu", next);
		first = sec;
		sec = next;
	}

	printf("\n");

	return (0);
}
