#include "main.h"

/**
 * reverse_array - A Function That Reverse An Array
 * @a: The Array To Reverse
 * @n: The Number of Elements of The Array
*/

void reverse_array(int *a, int n)
{
	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
