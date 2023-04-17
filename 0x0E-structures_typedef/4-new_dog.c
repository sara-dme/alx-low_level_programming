#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -  creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new dog struct or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	
	dog_t *d;
	d = malloc(sizeof(dog_t));
	d->name = name;
	d->age = age;
	d->owner = owner;
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	return (d);
}
