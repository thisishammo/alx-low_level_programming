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
	int h = 0;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		int *arr = (int *)malloc((max - min + 1) * sizeof(int)), i;

		if (arr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = min; i < max; i++)
			{
				arr[h] = i;
				h++;
			}
			return (arr);
		}
	}
}
