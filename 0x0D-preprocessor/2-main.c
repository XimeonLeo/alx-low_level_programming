#include <stdio.h>

/**
 *main - prints the name of the file from which the
 *source code was compiled using macro
 *
 *Return: zero for success
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
