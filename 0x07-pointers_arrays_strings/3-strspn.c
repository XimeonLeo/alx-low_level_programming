#include "main.h"

/**
 *_strspn - to locate bytes from one addredd and check
 *for occurrence in another address
 *@s: the main string to check from
 *@accept: the byte to consider
 *
 *Return: number of byte found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int string, accept_index, count = 0;

	for (string = 0; s[string]; string++)
	{
		for (accept_index = 0; accept[accept_index]; accept_index++)
		{
			if (s[string] == accept[accept_index])
			{
				count++;
				break;
			}
		}
		if (s[string] != accept[accept_index])
		{
			break;
		}
	}
	return (count);

}

