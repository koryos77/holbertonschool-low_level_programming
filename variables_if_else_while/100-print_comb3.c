#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Print  all possible different combinations of two digits.
 * Return: Always 0 if Success.
 */

int main(void)
{
	int i = 0;
	int j = 0;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
