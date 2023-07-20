#include "variadic_functions.h"

/**
 * print_numbers - Function To Print
 * @separator: ...
 * @n: ...........
 * @...: .........
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);

	if (!n)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d%s", x, (separator ? separator : ""));
	}
	printf("\n");
	va_end(args);
}
