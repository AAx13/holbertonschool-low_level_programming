#include "holberton.h"
#include <stdio.h>

int main(void)
{
	int len;
	char c = 'H';
	char *str = "HOLBERTON";

	_printf("This is %s with %c\n", str, c);
	len = _printf("Percent:[%%] and [%%] and [%%]\n");
	_printf("%d and %i\n", len, len);
	printf("%d and %i\n", len, len);
	return (0);
}
