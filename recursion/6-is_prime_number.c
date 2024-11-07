#include "main.h"
/**
 * is_prime_helper - function that return 1 or 0
 * @n: int value
 * @div: int div
 * Return: factorial given number; if n < 0 return -1
 */

int is_prime_helper(int n, int div)
{
	if (div * div > n)
	return (1);
	if (n % div == 0)
	return (0);

	return (is_prime_helper(n, div + 1));
}

/**
 * is_prime_number - function that return 1 or 0
 * @n: int value
 * Return: factorial given number; if n < 0 return -1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);

	return (is_prime_helper(n, 2));
}
