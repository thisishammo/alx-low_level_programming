#include"3-calc.h"
#include"stddef.h"
#include<stdio.h>
#include<string.h>
/**
 */

int (*get_op_func(char *s))(int a, int b)
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

	while (!(i > 4) || s != ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return ops[i].f;
		}
		i++;
	}
	return (NULL);
}
