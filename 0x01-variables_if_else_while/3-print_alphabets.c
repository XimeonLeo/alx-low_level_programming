#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: o for sucess
  */

int main(void)
{

	char lowerCase = 'a';
	char upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}

	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}

	putchar('\n');

return (0);
}
