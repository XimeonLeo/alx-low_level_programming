#include <stdio.h>
#include <ctype.h>

/**
  *main - Entry point
  *
  *Return: 0 for success
  */

int main(void)
{
	char lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	putchar('\n');
	return (0);
}
