#include <stdio.h>

/**
 *main - prints all arguments reveived
 *
 *@argc: argument count for the programme
 *@argv: argument vecfor for the programme
 *
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
