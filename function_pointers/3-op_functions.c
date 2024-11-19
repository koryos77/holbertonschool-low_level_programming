#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - function that addition num1 and num2
 * @num1: int num1
 * @num2: int num2
 * Return: Result of num1 + num2
 */

int op_add(int num1, int num2)
{
	return (num1 + num2);
}

/**
 * op_sub - function that substract num1 and num2
 * @num1: int num1
 * @num2: int num2
 * Return: Result of num1 - num2
 */

int op_sub(int num1, int num2)
{
	return (num1 - num2);
}

/**
 * op_mul - function that multiply num1 and num2
 * @num1: int num1
 * @num2: int num2
 * Return: Result of num1 * num2
 */

int op_mul(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * op_div - function that divide num1 and num2
 * @num1: int num1
 * @num2: int num2
 * Return: Result of num1 / num2
 */

int op_div(int num1, int num2)
{
	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (num1 / num2);
}

/**
 * op_mod - function that moudulo num1 and num2
 * @num1: int num1
 * @num2: int num2
 * Return: Result of num1 % num2
 */

int op_mod(int num1, int num2)
{
	if (num1 == 0 || num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (num1 % num2);
}
