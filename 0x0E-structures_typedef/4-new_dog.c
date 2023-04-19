#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - a function that duplicates a string
 *
 * @str: the string to be duplicated
 *
 * Return: a duplicate of the string passed
 */
char *_strdup(char *str)
{
	char *tmp_dup;
	int str_len, index;

	for (str_len = 0; str[str_len]; str_len++)
	{
		;
	}

	tmp_dup = malloc(sizeof(char) * (str_len + 1));

	if (!tmp_dup)
		return (NULL);

	for (index = 0; index < str_len; index++)
	{
		tmp_dup[index] = str[index];
	}
	tmp_dup[index] = '\0';

	return (tmp_dup);
}

/**
 * new_dog - creates a new profile fir a new dog
 *
 * @name: the new dogs name
 * @age: the new dogs age
 * @owner: the new customer
 *
 * Return: tge address where the new profile is stored
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	bingo = malloc(sizeof(dog_t));

	if (!bingo)
		return (NULL);

	bingo->name = _strdup(name);
	if (!bingo->name)
	{
		free(bingo);
		return (NULL);
	}

	bingo->age = age;

	bingo->owner = _strdup(owner);
	if (!bingo->owner)
	{
		free(bingo->name);
		free(bingo);
		return (NULL);
	}

	return (bingo);
}
