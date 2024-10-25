#include "main.h"
/**
 * jack_bauer - This function that prints all the minutes of jack bauer's day
 *
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void jack_bauer(void)
{
	int hrs;
	int min;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar(hrs);
			_putchar(58);
			_putchar(min);
			_putchar('\n');
		}
	}
}