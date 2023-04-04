#include "main.h"

/**
 *_strchr - locates characters in a string
 *
 *@s: the sting to be searched
 *@c: the character to search
 *
 *Return: the updated string for success
 *or return null 0
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a]; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return (NULL);
}
