#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: Print the last digit of the number stored in the variable n
 * Return: Always 0 if Success.
 */
int main(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'q' || letter == 'e')
{
continue;
}
putchar(letter);
}
putchar('\n');
return (0);
}
