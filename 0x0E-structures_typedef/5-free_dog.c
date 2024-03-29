#include "dog.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * free_dog - Define a new function that frees struct
 * @d: struct
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
