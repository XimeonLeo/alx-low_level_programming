#include <stdio.h>
#include <stdlib.h>

/**
 *main - add of integer arguments
 *
 *@argc: argument count for the programme
 *@argv: argument vector for the programmw
 *
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int index, j, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}

	else
	{
		for (index = 1; index < argc; index++)
		{
			for (j = 0; argv[index][j] != '\0'; j++)
			if (argv[index][j] < '0' || argv[index][j] > '9')
			{
				printf("Error\n");


				return (1);
			}
			sum += atoi(argv[index]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
