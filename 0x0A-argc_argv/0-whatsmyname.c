#include<stdio.h>
/**
 * main - executes code
 * @argc: number of arguments entered
 * @argv: the actual arguments entered
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	argc -= 1;
	printf("%s\n", argv[argc]);
	return (0);
}
