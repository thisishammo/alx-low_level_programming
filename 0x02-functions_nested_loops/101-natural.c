#include<stdio.h>
#include<stdlib.h>
/**
* natural - looks natural numbers that are multiples of 5
* Return: 0 always
*/
int natural(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
/**
* main - executes code
* Return: 0 always
*/
int main(void)
{
	natural();
	return (0);
}
