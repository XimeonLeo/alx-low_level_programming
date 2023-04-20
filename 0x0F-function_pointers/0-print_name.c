#include "function_pointers.h"

/**
 * print_name - prints name by derefrencing a functiin pointer
 *
 * @name: a poonter to the name to print
 * @f: a function pointer 
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		{
			f(name);
		}
}
