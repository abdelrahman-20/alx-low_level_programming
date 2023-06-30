#include "main.h"

/**
 * reverse_array - A Function That Reverse An Array
 * @a: The Array To Reverse
 * @n: The Number of Elements of The Array
*/

void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
