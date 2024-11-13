#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function that print poppy's infos
 * @d: pointer of struct dog
 * If an element of d is NULL print nil
 * If d is NULL print nothing
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;

	if (d->name == NULL)
	{
		printf("(nil)\n");
	}

	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age > 0)
	{
		printf("Age: %f\n", d->age);
	}

		if (d->owner == NULL)
	{
		printf("(nil)\n");
	}

	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
