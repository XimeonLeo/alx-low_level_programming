#include "main.h"

/**
 *_strdup - duplicates a string pointed to by str
 *into another string pointed to by another pointet
 *
 *@str: the string to duplicate
 *
 *Return: a pointer to the nee duplicated string
 */

char *_strdup(char *str)
{
	char *new_str;
	int len_str, index;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len_str = 0; str[len_str]; len_str++)
	{
		;
	}

	new_str = malloc(sizeof(char) * (len_str + 1));

	if (!new_str)
	{
		return (NULL);
	}

	for (index = 0; index < len_str; index++)
	{
		new_str[index] = str[index];
	}
	new_str[index] = '\0';

	return (new_str);
}
