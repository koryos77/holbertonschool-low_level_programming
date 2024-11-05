#include "main.h"
/**
 * print_chessboard - function that orint a chessboard
 * @a: pointer to a 8 characters array
 * Return: the iteration from the first occurence
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
