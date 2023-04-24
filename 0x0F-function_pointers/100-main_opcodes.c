#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int byt, i;
	int (*add)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byt; i++)
	{
		opcode = *(unsigned char *)add;
		printf("%.2x", opcode);

		if (i == byt - 1)
			continue;
		printf(" ");

		add++;
	}

	printf("\n");

	return (0);
}
