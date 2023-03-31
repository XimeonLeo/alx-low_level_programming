#include "main.h"

/**
 *_strcat - to append two strings
 *
 *@dest: first string to append
 *@src: second string to append
 *
 *Return: dest for success
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_length = 0;

	while (dest[index++])
	{
		dest_length++;
	}

	index = 0;
	while (src[index++])
	{
		dest[dest_length++] = src[index];
	}

	return (dest);
}
