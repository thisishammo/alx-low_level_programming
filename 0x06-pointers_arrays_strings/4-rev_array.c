#include"main.h"
#include<stdlib.h>
/**
* reverse_array - reverse the content of arrays
* @a: the array to be reversed
* @n: number of elements
*/
void reverse_array(int *a, int n)
{
	int *rev = (int *)malloc(100);
	int d = n - 1, k;

	for (k = 0; k < n; k++)
	{
		rev[k] = *(a + d);
		d--;
	}
	for (d = 0; d < n; d++)
	{
		*(a + d) = *(rev + d);
	}
	free(rev);
}
