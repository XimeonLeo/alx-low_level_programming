#include "main.h"

/**
 * argstostr - concantenates all the arguments taken during exexution
 *
 * @ac: arguments count
 * @av: arguments vector a double pointer
 *
 * Description: a new line comes up after each argument
 *
 * Return: pointer to the new string, else, NULL
 */

char *argstostr(int ac, char **av)
{
	char *str = NULL;
	int block, index, tmp = 0, count = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (block = 0; block < ac; block++)
	{
		for (index = 0; av[block][index] != '\0'; index++)
		{
			count++;
		}
	}

	str = malloc(sizeof(char) * (count + ac + 1));

	if (str == NULL)
	{
		return (NULL);
	}

	for (block = 0; block < ac; block++)
	{
		for (index = 0; av[block][index] != '\0'; index++, tmp++)
		{
			str[tmp] = av[block][index];
		}
		str[tmp++] = '\n';
	}

	str[tmp] = '\0';

	return (str);
}
