#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 *
 * @argc: argument count
 * @argv: a douubke pointer
 *
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int cent, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	while (cent > 0)
	{
		if (cent >= 25)
			cent -= 25;
		else if (cent >= 10)
			cent -= 10;
		else if (cent >= 5)
			cent -= 5;
		else if (cent >= 2)
			cent -= 2;
		else if (cent >= 1)
			cent -= 1;

		change++;
	}

	printf("%d\n", change);

	return (0);
}
