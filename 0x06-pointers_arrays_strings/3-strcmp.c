#include "main.h"

/**
 *_strcmp - to compare two strings
 *
 *@s1: first string to consider
 *@s2: second string to consider
 *
 *Return: difference of strings
 */

int _strcmp(char *s1, char *s2)
{
	int length = 0;

	while (s1[length] == s2[length] && s1[length] != '\0')
	{
		length++;
	}

	return (s1[length] - s2[length]);
}
