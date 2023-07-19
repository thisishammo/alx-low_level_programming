#include"main.h"
#include<stdio.h>
/**
* print_times_table - prints the multiplication table
* @n: dictates where the multiplication reaches
*/
void print_times_table(int n)
{
	
	int i, h;
	if (n < 100)
	{
		for (i = 0; i <= n; i++)
		{
			for (h = 0; h <= n; h++)
			{
			if(h != n)
			{
				if (h == 0)
				{
					printf("%1d,", i * h);
				}
				else
				printf("%4d,", i * h);
			}
			else
			if(h != 0)
			{
				printf("%4d", i * h);
			}
			else
				printf("%d", i *h);
			}
		printf("\n");
		}
	}
}
