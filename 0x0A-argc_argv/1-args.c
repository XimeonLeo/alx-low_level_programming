#include <stdio.h>

/**
 *main - prints the number of arguments passed to it
 *
 *@argc: argument count for the programme
 *@argv: argument vector foe the programme
 *
 *Return: 0 for success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%i\n", argc - 1);

	return (0);
}
