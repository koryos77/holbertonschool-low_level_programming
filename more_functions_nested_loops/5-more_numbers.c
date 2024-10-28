#include "main.h"
/**
 * more_numbers - Print numbers from 0 to 14, 10 times.
 *
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
		{
			for (j = 0; j < 15; j++)
			{
				if (j >= 10)
				{
					_putchar((j / 10) + '0');
				}
					_putchar((j % 10) + '0');
			}
			_putchar('\n');
		}
}
