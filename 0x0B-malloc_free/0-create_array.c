#include "main.h"

/**
 * *create_array - A Function To Initialize an Array
 * @size: The Size of The Array
 * @c: The Char To Initialize with
 * Return: A Pointer To The Array
*/

char *create_array(unsigned int size, char c)
{
	char *arr = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		arr[size] = c;

	return (arr);

}
