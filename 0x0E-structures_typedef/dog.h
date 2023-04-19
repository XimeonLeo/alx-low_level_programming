#ifndef __DOG_H__
#define __DOG_H__

/**
 * struct dog - a new data type to classify nake age and owner of a dog
 *
 * @name: the name of the required dog
 * @age: hiw old the dog is
 * @owner: who the dog belongs too
 *
 */

struct dog
{

	char *name;
	float age;
	char *owner;

};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /*__DOG_H__*/
