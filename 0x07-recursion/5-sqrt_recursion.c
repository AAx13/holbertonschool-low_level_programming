#include "holberton.h"

int sqrt_iterate(int n, int i)
{
	if (n < 1 || i > n / 2)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	if (i * i == n)
	{
		return (i);
	}

	return (sqrt_iterate(n, i + 1));
}

int _sqrt_recursion(int n)
{
	int i;

	i = 1;
	return (sqrt_iterate(n, i));
}
