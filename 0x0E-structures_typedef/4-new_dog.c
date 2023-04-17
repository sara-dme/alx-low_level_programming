#include <stdio.h>
#include "dog.h"

/**
 * new_dog -  creates a new dog.
 * @name: name
 * @age: age
 * @owner: owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;
	if (d == NULL)
		return (NULL);
	else
	{
	d.name = name;
	d.age = age;
	d.owner = owner;
	}
	return (d);
}
