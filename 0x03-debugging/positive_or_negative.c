#include <stdlib.h>
#include "main.h"
#include<stdio.h>
/**
 * * positive_or_negative - determines whether n is positive or negative or zero
 * * Return: 0 means successful otherwise means error
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
