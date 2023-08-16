#include"function_pointers.h"
/**
 * array_iterator - iterates over the elements in an array
 * @array: array to be iterated over
 * @size: number of elements in the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
