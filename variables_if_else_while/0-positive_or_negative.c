#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* with if {} are mandatory*/
/**
* main - Entry point
*
* Description: Prints a specific message to stdout using puts.
* Return: Always 0 (Success)
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
