#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - to know the length
 * @s: string
 * Return: on Sucess 1
 * On error, 0 is returned
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
	len++;
	s++;
	}
	return (len);
}
/**
 * _strcpy- to copy
 * @dest: destination
 * @src: source
 * Return: on Sucess 1
 * On error, 0 is returned
 */

char *_strcpy(char *dest, char *src)
{
	char *Return = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (Return);
}
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
	dog_t *dog;
	int name_len = 0;
	int owner_len = 0;

	if (name == NULL || owner == NULL)
	return (NULL);

	if (name != NULL && owner != NULL)
	{
		name_len = _strlen(name) + 1;
		owner_len = _strlen(owner) + 1;

		dog = malloc(sizeof(dog_t));

		if (dog == NULL)
		return (NULL);

		dog->name = malloc(sizeof(char) * name_len);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(sizeof(char) * owner_len);
		if (dog->owner == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		dog->age = age;
		dog->name = _strcpy(dog->name, name);
		dog->owner = _strcpy(dog->owner, owner);
	}
	return (dog);
}
