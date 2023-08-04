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
			if (isdigit(argv[i] != 0)
			{	
				sum += atoi(argv[i]);
			}
			else
				break;
		}
		printf("%d\n", sum);
	return (0);
}
