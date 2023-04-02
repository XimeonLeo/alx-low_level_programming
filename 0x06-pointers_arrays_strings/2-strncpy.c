#include "main.h"

/**
 *_strncpy - to vopy a string
 *
 *@dest: array of characters
 *@src: string to copy
 *@n: condition for copy
 *
 *Return: dest for success
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, index_src = 0;

	while (src[index++])
	{
		index_src++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}

	for (index = index_src; index < n; index++)
	{
		dest[index] = '\0';
	}

	return (dest);

}
