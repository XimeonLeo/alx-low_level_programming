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
	int index, dgt, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}

	else
	{
		for (index = 1; index < argc; index++)
		{
			if (*argv[index] < '0' || *argv[index] > '9')
			{
				printf("Error\n");


				return (1);
			}

			else
			{
				dgt = atoi(argv[index]);
				sum += dgt;
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
