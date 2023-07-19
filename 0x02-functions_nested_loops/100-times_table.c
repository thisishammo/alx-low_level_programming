#include"main.h"
#include<stdio.h>
/**
* print_times_table - prints the multiplication table
* @n: dictates where the multiplication reaches
*/
void print_times_table(int n)
{
	int i, h;
	for (i = 0; i <= n; i++)
	{
		for (h = 0; h <= n; h++)
		{
			if(h != (n*n))
			{
				printf("%d, ", i * h);
			}
			else
			printf("%d\n", i * h);
		}
		printf("\n");
	}
}