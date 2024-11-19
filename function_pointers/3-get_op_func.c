#include "3-calc.h"
/**
 * get_op_func - start on the getting operation function
 * @s : the pointer that stored the operation sign
 * Description: we check for each element of ops if it is the same
 * as the pointer that we receive as a parameter. if it's not, we return NULL
 * Return: return NULL if s is not what we are looking for,else return ops[i].f
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

	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
