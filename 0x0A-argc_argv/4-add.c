#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - executes code
 * @argc: number of arguments entered
 * @argv: actual arguments entered
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	argc--;

	if (argc == 0)
	{
		printf("0\n");
	}
	for (i = 1; i <= argc; i++)
	{
		sum += atoi(argv[i]);
	}
	if (argc != 0)
	{
		printf("%d\n", sum);
	}
	return (0);
}
