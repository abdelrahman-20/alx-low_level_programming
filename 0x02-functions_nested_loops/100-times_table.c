#include "main.h"

/**
 * print_times_table - entry function
 *
 * @n: dimensions of function
*/

void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j != n)
				printf("%d, ", i * j);
			else
				printf("%d\n", i * j);
		}
	}
}
