#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - that prints a struct dog
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
			free(d);
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)");
			free(d->name);
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age == 0)
		{
			printf("Age: (nil)");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)");
			free(d->owner);
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
