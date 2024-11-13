#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is the structure for dog infos
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
