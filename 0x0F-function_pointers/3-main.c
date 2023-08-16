#include"3-calc.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
/**
 * main - executes code
 * @argc: number of arguments
 * @argv: actual arguments
 * Return: 0 if successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int a, b, result;
	char *op = argv[2];

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = (*get_op_func(op))(a, b);
	printf("%d\n", result);
	return (0);
}
