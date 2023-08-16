#include"function_pointers.h"
/**
 * int_index - looks for integers in array
 * @array: array in which integers are to be looked
 * @size: size of the array
 * @cmp: function pointer
 * Return: -1 if size is 0 or less otherwise return position
 * of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		int i, elem, elem_in_array;

		for (i = 0; i < size; i++)
		{
			elem_in_array = array[i];
			elem = (*cmp)(elem_in_array);
			if (elem != 0)
			{
				break;
			}
		}
		if (i == size)
		{
			return (-1);
		}
		else
		{
			return (i);
		}
	}
}
