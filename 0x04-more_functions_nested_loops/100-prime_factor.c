#include <stdio.h>

/**
 * _sqrt - Get Square of A Number
 * @x: The Number We Get It's Square
 * Return: The Result
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - Prime Function
 * @num: The Number We Get It's Largest Prime Factor
*/

void largest_prime_factor(long int num)
{
	int prim, max;

	while (num % 2 == 0)
	{
		num = num / 2;
	}

	for (prim = 3; prim <= _sqrt(num); prim += 2)
	{
		while (num % prim == 0)
		{
			num = num / prim;
			max = prim;
		}
	}

	if (num > 2)
		max = num;
	printf("%d\n", max);
}

/**
 * main - Entry Function
 *
 * Return: Always 0
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
