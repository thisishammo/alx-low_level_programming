#include"main.h"
#include<stdio.h>
/**
* print_to_98 - prints n to 98
* @n: initializer
* Return: void always
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	for (n = n; n >= 98; n--)
	{
		printf("%d, ", n);
	}
}
