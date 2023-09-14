#include "function_pointers.h"

/**
 * int_index - A Function To Return Index of Item In Array
 * @array: The Array
 * @size: The Size of Array
 * @cmp: The Pointer To Function
 *
 * Return: The Index of Item
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int res = 0, i = 0;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i])
				return (i);
		}
	}
	return (-1);
}
