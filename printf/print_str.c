#include <unistd.h>
#include "holberton.h"

/**
 * print_str - writes a string to stdout.
 * @str: Contains to desired string to write to stdout.
 *
 * Return: Void.
 */
void print_str(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
