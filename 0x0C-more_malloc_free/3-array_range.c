#include"main.h"
#include<stdlib.h>
/**
 * array_range - creates an array
 * @min: minimum value
 * @max: max value
 * Return: pointer to integer
 */
int *array_range(int min, int max)
{
	int *arr = (int *)malloc((max - min + 1) * sizeof(int)), i;

	for (i = min; i < max; i++)
	{
		arr[i] = i;
	}
	return (arr);
}