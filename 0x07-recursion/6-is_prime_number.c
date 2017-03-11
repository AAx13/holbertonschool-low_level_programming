#include "holberton.h"

int prime_iterate(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i == n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	return (prime_iterate(n, i + 1));
}

int is_prime_number(int n)
{
	int i;

	i = 2;
	return (prime_iterate(n, i));
}
