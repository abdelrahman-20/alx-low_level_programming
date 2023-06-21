#include "main.h"

/**
 * main - Entry Function
 *
 * Return: 0 is Success
*/

int main(void)
{
	int n;
	long sum;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
			sum = sum + n;
	}
	printf("%ld", sum);

	return (0);
}
