#include "main.h"
/**
 * rev_string - a pointer to reverse a string
 * @s: string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

void rev_string(char *s)
{
	int length = 0;
	int i;
	char reversed[10];/*create an array for the reversed string*/

	while (s[length] != '\0')/*find the length of the string*/
	{
		length++;
	}

	for (i = 0; i < length; i++)/*fill the array*/
	{
		reversed[i] = s[length - 1 - i];
	}
	reversed[length] = '\0';

	for (i = 0; i <= length; i++)/*copy the reversed string in the array*/
	{
		s[i] = reversed[i];
	}
}