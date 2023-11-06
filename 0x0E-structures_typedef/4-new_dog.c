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
	int x, y, k;
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
	p->owner = malloc(y + 1);

	if (p->name == NULL || p->owner == NULL)
	{
		free(p->name), free(p->owner), free(p);
		return (NULL);
	}
	for (k = 0; k < x; k++)
	{
		p->name[k] = name[k];
	}
	p->name[k] = '\0';
	for (k = 0; k < y; k++)
	{
		p->owner[k] = owner[k];
	}
	p->owner[k] = '\0';
	p->age = age;
	return (p);
}
