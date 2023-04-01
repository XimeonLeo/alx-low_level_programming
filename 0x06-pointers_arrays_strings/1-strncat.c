#include "main.h"

/**
 *_strncat - concatenate strings with n condition
 *
 *@dest: first string to be considered
 *@src: second string to be considered
 *@n: condition to consider
 *
 *Return: value of dest for success
 */

char *_strncat(char *dest, char *src, int n)
{
	int index;
	int index_of_dest = 0;

	while (dest[index_of_dest] != '\0')
	{
		index_of_dest++;
	}

	for (index = 0; src[index] && index < n; index++)
	{
		dest[index_of_dest] = src[index];
		index_of_dest++;
	}

	return (dest);
}
