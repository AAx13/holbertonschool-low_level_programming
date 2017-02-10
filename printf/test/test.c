#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * Messing around with variable amount of arguments
 * <stdarg.h> (va_list, va_start, va_end, va_arg)
 */

/**
 * print_sum - returns the sum of any amount of numbers passed by user input.
 * @i: Iterator through argv.
 * @sum: Sum of all numbers passed into the function.
 * @args: Pointer to variable amount of arguments.
 *
 * Return: Void.
 */
void print_sum(char **argv, ...)
{
	int i;
	int sum;
	va_list args;

	sum = 0;
	va_start(args, argv);

	for (i = 1; argv[i] != '\0'; i++)
	{
		sum += atoi(argv[i]);
	}

	va_end(args);

	printf("%d\n", sum);
}

int main(int argc, char **argv)
{
	int i;
	int x;

	if (argc < 2)
	{
		printf("[Usage: myprog (int) (int) ...]\n");
		return (1);
	}

	for (i = 1; argv[i] != '\0'; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (!isdigit(argv[i][x]) && argv[i][x] != 45)
			{
				printf("Error: [ %s ] is not a number-", argv[i]);
				printf("[Usage: myprog (int) (int) ...]\n");
				return (1);
			}
		}
	}

	print_sum(argv, argv);

	return (0);
}

/* Still need to account for INT_MIN and INT_MAX */
