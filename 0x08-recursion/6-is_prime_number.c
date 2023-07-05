#include "main.h"

/**
 * is_prime_number - A Function To Check For Prime Number
 * @n: The Number To Check
 * @root: Root Number
 * Return: 0 or 1
*/

int check_prime(int n, int root);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - Function To Check Prime Number
 * @n: The Number
 * @root: Potential Root
 * Return: 0 or 1
*/

int check_prime(int n, int root)
{
	if (root >= n && n >= 2)
		return (1);
	else if (n % root == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, root + 1));
}
