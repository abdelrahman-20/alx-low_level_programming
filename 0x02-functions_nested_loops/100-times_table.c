#include "main.h"

/**
 * print_times_table - entry function
 *
 * @n: dimensions of function
*/

void print_times_table(int n)
{
	int i, j, product;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (j == 0)
			{
				printf("%d, ", product);
			}
			else if (j == n)
			{
				if (product <= 9)                                         
					printf("  %d\n", product);                                 
				else if (product <= 99)                                         
					printf(" %d\n", product);                                 
				else                                         
					printf("%d\n", product);
			}
			else
			{
				if (product <= 9)
					printf("  %d, ", product);
				else if (product <= 99)
					printf(" %d, ", product);
				else
					printf("%d, ", product);
			}
		}
	}
}
