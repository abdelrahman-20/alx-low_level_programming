#include "main.h"

/**
 * swap_int - Swap Function
 * @a: First Number
 * @b: Second Number
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
