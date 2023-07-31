#include<stdlib.h>
#include"main.h"
#include<stdio.h>
/**
* print_diagsums - displays the sum
* of two diagonals of matrices
* @a: point to an integer
* @size: size of one array
* return: nothing
*/
void print_diagsums(int *a, int size)
{
	int i;

	for (i = 0; i < size * size; i++)
	{
		printf("%d", *a);
	}
}
