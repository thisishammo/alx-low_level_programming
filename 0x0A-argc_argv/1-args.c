#include<stdio.h>
/**
 * main - executes code
 * @argc: number of arguments entered
 * @argv: the actual arguments entered
 * Return: 0 if successful
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
