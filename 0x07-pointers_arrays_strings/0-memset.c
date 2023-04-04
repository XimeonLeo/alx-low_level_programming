#include "main.h"

/**
 *_memset - fills the memory of a particular string
 *with a comstant byte
 *
 *@s: memory area where the string is stored
 *@b: the byte to fill with
 *@n: condition for filling
 *
 *Return: an updated pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
