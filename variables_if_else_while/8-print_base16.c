#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Print the last digit of the number stored in the variable n
 * Return: Always 0 if Success.
 */
int main(void)
{
int i;

for (i = 0; i <= 15; i++)
{

char hex[] = "0123456789abcdef";
putchar(hex[i]);
}
putchar('\n');
return (0);
}
