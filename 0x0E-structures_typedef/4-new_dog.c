#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x, y, h;
	dog_t *p;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (x = 0; name[x]; x++)
		;
	for (y = 0; owner[y]; y++)
		;
	p->name = malloc(x + 1);
	p->owner = malloc(x + 1);

	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name), free(p->owner), free(p);
		return (NULL);
	}
	for (h = 0; h < x; h++)
	{
		p->name[h] = name[h];
	}
	p->name[h] = '\0';
	for (h = 0; h < y; h++)
	{
		p->owner[h] = owner[h];
	}
	p->owner[h] = '\0';
	p->age = age;
	return (p);
}
