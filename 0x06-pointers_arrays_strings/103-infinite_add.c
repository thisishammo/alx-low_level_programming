#include"main.h"
#include<inttypes.h>
#include<stdlib.h>
/**
* infinite_add - adds two numbers
* @n1: one of the numbers
* @n2: one of the nnumbers
* @r: buffer to where the function
* will store the result
* @size_r: size of the buffer
* Return: 0 if can't store the result
* otherwise pointer r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int64_t result = 0, digit2, result2 = 0, i, total, digit, total2;
	total = sizeof(n1) - 1;
	total2 = sizeof(n2) - 1;
	int *rev = (int*)malloc(1000000);
	int *rev2 = (int*)malloc(1000000);
	for (i = 0; i < total; i++)
	{
		digit = ((int)n1[i]) - 48;
		rev[i] = digit;
		if (i < total)
		{
			result = result + rev[i];
			result *= 10;
		}
		else
			result = result + rev[i];
	}
	result /= 10;
	for (i = 0; i < total2; i++)
	{
		digit2 = ((int)n2[i]) - 48;
		rev2[i] = digit2;
		if (i < total2)
		{
			result2 = result2 + rev2[i];
			result2 *= 10;
		}
		else
			result2 = result2 + rev2[i];
	}
	result2 /= 10;
	*r = result + result2;
	return (r);
}
