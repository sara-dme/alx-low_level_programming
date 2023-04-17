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
	char *n;
	char *ow;
	dog_t *d;
	int i, len1 = 0, len2 = 0;

	for (i = 0; name[i] != '\0'; i++)
		len1++;
	for (i = 0; owner[i] != '\0'; i++)
		len2++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	 n = malloc(sizeof(char *) * (len1 + 1));
	 ow = malloc(sizeof(char *) * (len2 + 1));
	for (i = 0; i <= len1; i++)
		n[i] = name[i];
	for (i = 0; i <= len2; i++)
		ow[i] = owner[i];
	if (n == NULL)
	{
		free(n);
		return (NULL);
	}

	if (ow == NULL)
	{
		free(ow);
		free(n);
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

