#include "main.h"

/**
 *rev_string - to print a string in reverse
 *@s: the string to be reveresed
 *Return: void for success
 */

void rev_string(char *s)
{
	int s_len = 0, a = 0;
	char tempo;

	while (s[a++])
	{
		s_len++;
	}
	for (a = 0; a < s_len / 2; a++)
	{
		tempo = s[a];
		s[a] = s[s_len - a - 1];
		s[s_len - a - 1] = tempo;
	}
}
