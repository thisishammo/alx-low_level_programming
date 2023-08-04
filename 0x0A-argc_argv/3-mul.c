#include<stdio.h>
#include<stdlib.h>
/**
 * main - executes code
 * @argc: number of arguments entered
 * @argv: the actual arguments entered
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, product = 1;

	if (argc > 1)
	{	
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}	
		printf("%d\n", product);
	}
	else
		printf("Error\n");
	return (0);
}
