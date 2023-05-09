#include "main.h"

int _strlen(char *string);

/**
 * _strlen - an helper function to get the length of string
 * @string: a pointer to the string whoes length is to be gotten
 *
 * Return: length of string
 */
int _strlen(char *string)
{
	unsigned int length = 0, index = 0;

	while (string[index])
	{
		length++;
		index++;
	}
	return (length);
}

/**
 * string_nconcat - using malloc to create space to concatenate two strings
 * @s1: first string
 * @s2: the second string
 * @n: the size to create
 *
 * Return: a new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *s1_s2 = NULL;

	if (!s1)
	{
		s1 = "";
	}
	if (!s2)
	{
		s2 = "";
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (len2 < n)
	{
		len2 = n;
	}
	s1_s2 = malloc(len1 + n + 1);
	if (!s1_s2)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s1_s2[i] = *s1++;
	}
	while (n > 0)
	{
		s1_s2[i] = *s2++;
		i++, n--;
	}
	s1_s2[i] = '\0';
	return (s1_s2);
}
