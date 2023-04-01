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
	int length, length_s1, length_s2;

	for (length = 0; s1[length]; length++)
	{
		length_s1++;
	}

	for (length = 0; s2[length]; length++)
	{
		length_s2++;
	}

	return (*s1 - *s2);
}
