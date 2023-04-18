#include "dog.h"

/**
 * init_dog - initialize the name of a particular dog
 *
 * @d: the dog to be initialized
 * @name: the name of the dog
 * @age: how old the dog is
 * @owner: who own's the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
