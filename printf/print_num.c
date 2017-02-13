#include "holberton.h"

/**
 * print_num - function to write numbers to stdout.
 * @n: Contains the number passed to write to stdout.
 *
 * Return: Void.
 */
void print_num(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	if (n / 10)
	{
		print_num(n / 10);
	}

	_putchar(n % 10 + '0');
}
