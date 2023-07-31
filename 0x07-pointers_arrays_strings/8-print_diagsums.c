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
	int i, sum1 = 0, sum2 = 0, ref = size + 1, n = size - 1, ref1, h;

	for (i = 0; i < size * size; i++)
	{
		if (i == 0)
		{
			sum1 = i;
		}
		if (i % ref == 0)
		{
			sum1 = sum1 + *(a + i);
		}
	}
	for (h = 0; h < size * size; h++)
	{
		if (h == n)
		{
			sum2 += *(a + h);
			ref1 = (2 * n);
		}
		if (h == ref1)
		{
			sum2 += *(a + h);
			ref1 += n;
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
