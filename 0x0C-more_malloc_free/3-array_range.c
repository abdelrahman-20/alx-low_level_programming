#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function
 * @min: ...
 * @max: ...
 * Return: Pointer
*/

int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = min++;

	return (ptr);
}
