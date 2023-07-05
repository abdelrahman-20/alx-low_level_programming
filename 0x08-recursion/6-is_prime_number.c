#include "main.h"

/**
 * is_prime_number - A Function To Check For Prime Number
 * @n: The Number To Check
 *
 * Return: 0 or 1
*/

int is_prime_number(int n)
{
	int i, prime = 1;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			prime = 0;
	}

	if (prime)
		return (1);
	else
		return (0);
}
