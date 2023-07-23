#include"main.h"
#include<stdio.h>
/**
* print_array - prints the elements of an array
* @a: array name
* @n: the size of the array
* Return: nothing
*/
void print_array(int *a, int n)
{
	int h;

	if (n >= 0)
	{
	for (h = 0; h < n; h++)
	{
		if (h != n - 1)
		{
			printf("%d, ", *(a + h));
		}
		else
		printf("%d\n", *(a + h));
	}
	}
	else
		printf("\n");
}
