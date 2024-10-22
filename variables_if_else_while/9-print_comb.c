#include <stdio.h>
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
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
