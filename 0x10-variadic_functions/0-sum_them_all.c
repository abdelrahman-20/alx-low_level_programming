#include "variadic_functions.h"

/**
 * sum_them_all - Variadic Function
 * @n: Number of Arguments
 * @...: The Numbers To Sum
 * Return: The Sum of Numbers
*/

int sum_them_all(const unsigned int n, ...)
{
	int s = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args)

	return (s);
}
