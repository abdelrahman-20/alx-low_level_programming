#include "calc.h"

/**
 * get_op_func - A Function To Get Required Operation
 * @s: The Symbol of Operation
 *
 * Return: The Required Function
*/

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 5)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);

		i++;
	}
	return (NULL);
}
