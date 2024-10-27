#include <stdio.h>
#include "main.h"
/*
* int main(void): is the main function
*
* Return: on success 0
* On error,1 is returned
*/

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("%d\n", sum);

	return (0);
}
