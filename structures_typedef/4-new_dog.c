#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function that print poppy's infos
 * @name: pointer to the name
 * @age: age of the new dog
 * @owner: owner of the new dog
 * store a copy of name and owner
 * Return: NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;
	int j = 0;
	dog_t *d;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	return (NULL);

	for (i = 0; name[i] != '\0'; i++)
	{
		d->name = malloc(i + 1);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
	}
	for (j = 0; j < i; j++)
	{
		d->name[j] = name[j];
	}
	d->name[j] = '\0';

	for (i = 0; owner[i] != '\0'; i++)
	{
		d->owner = malloc(i + 1);
		if (d->owner == NULL)
		{
			free(d);
			return (NULL);
		}
	}
	for (j = 0; j < i; j++)
	{
		d->owner[j] = owner[j];
	}
	d->owner[j] = '\0';
	d->age = age;
	return (d);
}
