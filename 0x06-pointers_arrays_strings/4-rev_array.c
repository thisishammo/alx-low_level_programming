#include"main.h"
/**
* reverse_array - reverse the content of arrays
* @a: the array to be reversed
* @n: number of elements
*/
void reverse_array(int *a, int n)
{
	int h = 0;
	int k;

	for (k = n - 1; k >= 0; k--)
	{
		int s = *(a + k);
		*(a + h) = s;
		h++;
	}
}
