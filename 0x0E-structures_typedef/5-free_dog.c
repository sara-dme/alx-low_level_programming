#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog -  frees dogs.
 * @d: pointer of type dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	free(d);
}
