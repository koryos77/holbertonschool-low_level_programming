#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function is main
 * @argc: arguments contents
 * @argv: arguments vectors
 * Return: on Sucess 0
 * On error, Jules is returned
 */

int main(int argc, char *argv[])
{
	unsigned int num1;
	unsigned int num2;
	unsigned int product;

	if (argc == 3)
	{
		printf("Error \n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;

	printf("%d\n", product);
	return (0);
}
