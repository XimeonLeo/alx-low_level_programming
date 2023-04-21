#include "3-calc.h"

/**
 * main - performs the operafiom passed as an argument
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: an integer
 */

int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (*argv[2] == '/' || *argv[2] == '%')
	{
		if (argv[3] == 0)
		{
			printf("Error\n");
			exit(100);
		}
	}

	printf("%d\n", get_op_func(argv[2])(a, b));

	return (0);
}
