#include <stdio.h>
/**
* main - prints the required things
* Return: 0 means successful otherwise error
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (k > j && j > i)
				{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
