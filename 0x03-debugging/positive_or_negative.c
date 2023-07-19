#include<stdio.h>
/**
* positive_or_negative - determines whether n is +ve or negative or zero
* @n: integer to be checked
*/
void positive_or_negative(int n)
{
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}
	else
	printf("%d is zero\n", n);
}
