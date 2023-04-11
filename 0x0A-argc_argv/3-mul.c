#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiply the integer value passed as arguments
 *
 *@argc: argument count for the programme
 *@argv: argument vector for tne programme
 *
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int a, b, mul = 0;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;

		printf("%d\n", mul);
	}
	return (0);
}
