#include "main.h"

/**
 *_strpbrk - locates the occurrence of byte in one string
 *in another
 *
 *@s: the sting to consider for case of occurrence
 *@accept: string to provide bytes to search for
 *
 *Return: the location of first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int s_index, accept_index;

	for (s_index = 0; s[s_index]; s_index++)
	{
		for (accept_index = 0; accept[accept_index]; accept_index++)
		{
			if (s[s_index] == accept[accept_index])
			{
				return (s + s_index);
			}
		}
	}
	return (NULL);
}
