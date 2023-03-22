#include "main.h"
/**
  * _abs - Entry point
  * @int: intergers are considered
  *Return: absolute value of a number
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs;

		abs = c * -1;
		return (abs);
	}
	return (0);
}
