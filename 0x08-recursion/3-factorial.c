#include "main.h"

/**
 * factorial - A Function To Get The Factorial Of Number
 * @n: The Number We Get It's Factorial
 *
 * Return: The Factorial Result of The Number
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
