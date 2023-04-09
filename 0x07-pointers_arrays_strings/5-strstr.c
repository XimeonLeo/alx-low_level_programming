#include "main.h"

/**
 *_strstr - finds the first occurrence of a substring in anothet string
 *
 *@haystack: main string
 *@needle: substring
 *
 *Return: string haystack from point of occurrence
 */

char *_strstr(char *haystack, char *needle)
{
	int h, n;

	for (h = 0; haystack[h] != '\0'; h++)
	{
		if (*needle == 0)
		{
			return (haystack);
		}
		if (haystack[h] == needle[0])
		{
			for (n = 0; needle[n] != '\0'; n++)
			{
				if (haystack[h + n] != needle[n])
				{
					break;
				}
			}
			if (needle[n] == '\0')
			{
				return (&haystack[h]);
			}
		}
	}
	return (NULL);
}
