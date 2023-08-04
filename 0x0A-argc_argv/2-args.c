#include<stdio.h>
/**
 * main - execute code
 * @argc: number of arguments entered
 * @argv: the actual arguments entered
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
