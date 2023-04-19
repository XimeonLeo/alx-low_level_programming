#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees up space perviously allocated to d
 *
 * @d: a pointer to what is to be freed
 *
 * Return: nkthing but freedom
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
