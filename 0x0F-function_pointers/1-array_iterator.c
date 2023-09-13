#include "function_pointers.h"

/**
 * array_iterator - A Function To Perform An Action on Array Elements
 * @array: The Array
 * @size: The Size of Array
 * @action: The Function To Perform
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
