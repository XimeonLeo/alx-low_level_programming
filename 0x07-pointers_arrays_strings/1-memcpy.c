#include "main.h"

/**
 *_memcpy - copies a particular size of byte from
 *a particular pointer to another
 *
 *@src: the source of the string
 *@dest: the destination to copy to
 *@n: the contion size to copy
 *Return: the string dest for success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);

}
