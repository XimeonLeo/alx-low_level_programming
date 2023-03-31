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
	int index = 0, length_of_dest = 0;

	while (dest[index++] != '\0')
	{
		length_of_dest++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[length_of_dest] = src[index];
		length_of_dest++;
	}


	return (dest);
}
