#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog -  creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	
	dog_t *d;
	d = malloc(sizeof(dog_t));
	d->name = name;
	d->age = age;
	d->owner = owner;
	if (d == NULL)
		return (NULL);
	return (d);
}
