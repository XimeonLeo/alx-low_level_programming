#include "3-calc.h"

/**
 * get_op_func - a pointer to function that selects the correct
 *operation to use
 *
 * @s: the operator passed from the argumemt
 *
 * Description: this function only takes two arguments
 *Return: a pointer to the appropriate function selected
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}

	return (ops[i].f);
}
