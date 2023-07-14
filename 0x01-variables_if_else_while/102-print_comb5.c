#include <stdio.h>
/**
* main - prints the required things
* Return: 0 means successful otherwise error
*/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					if (l > k && k > j && j > 1)
					{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
