#include"main.h"
/**
* swap_int - swaps the values of two integers
* @a: integer
* @b: integer
* Return: nothing
*/
void swap_int(int *a, int *b)
{
	int ab = *a;
	int bb = *b;

	*a = bb;
	*b = ab;
}
