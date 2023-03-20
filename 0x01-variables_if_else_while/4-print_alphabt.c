#include <stdio.h>
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
		if (lowerCase == 'e' || lowerCase == 'q')
		{
			lowerCase++;
		}
		else
		{
			putchar(lowerCase);
			lowerCase++;
		}
		
	}
	putchar('\n');
	return (0);
}
