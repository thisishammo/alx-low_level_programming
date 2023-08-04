#include <stdio.h>
#include <stdlib.h>
/**
 * main - execute code
 * @argc: number of parameters
 * @argv: actual parameters entered
 * Return: 0 if successful
 */
int main(int argc __attribute__ ((unused)), char *argv[])
{
	int cents = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};
	int change = 0, i;

	for (i = 0; i < 5; i++)
	{
		if (cents >= coins[i])
		{
			change += cents / coins[i];
			cents %= coins[i];
		}
	}
	printf("%d\n", change);
	return (0);
}
