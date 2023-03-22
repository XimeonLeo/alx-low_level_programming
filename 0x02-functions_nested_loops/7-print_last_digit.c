#include "main.h"
/**
  *print_last_digit - Entrt point
  *@i: integer to consider
  *Return: last digit of a number
  */

int print_last_digit(int i)
{
	int lst_dgt;

	lst_dgt = i % 10;
	if (i < 0)
	{
		lst_dgt = lst_dgt * -1;
	}
	_putchar(lst_dgt + '0');
	return (lst_dgt);
}
