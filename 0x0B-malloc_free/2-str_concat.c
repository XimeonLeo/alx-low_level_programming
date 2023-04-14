#include "main.h"

/**
 *str_concat - concatenates two strings s1 and s2
 *
 *@s1: pointer to the first string to concatenate
 *@s2: pointer to the second string to concatenate
 *
 *Return: a new pointer that contains the content of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *s1_2;
	int len_1, len_2, index, tmp;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_1 = 0;
	while (s1[len_1])
	{
		len_1++;
	}
	len_2 = 0;
	while (s2[len_2])
	{
		len_2++;
	}
	s1_2 = malloc(sizeof(char) * (len_1 + len_2 + 1));
	if (!s1_2)
	{
		return (NULL);
	}
	for (index = 0; index < len_1; index++)
	{
		s1_2[index] = s1[index];
	}
	for (tmp = 0; tmp < len_2; tmp++)
	{
		s1_2[index++] = s2[tmp];
	}
	s1_2[index] = '\0';
	return (s1_2);
	free(s1_2);
}
