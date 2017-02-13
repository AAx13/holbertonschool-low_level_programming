#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - function that produces output according to a format.
 * @format: Contains all format parameters for a variable amount of arguments.
 *
 * Return: Number of characters printed (excluding null byte for strings).
 */
int _printf(const char *format, ...)
{
	int len, ui, count;
	char *str;
	va_list args;

	count = 0;
	va_start(args, format);
	for (len = 0; format[len]; len++)
	{
		if (format[len] != '%')
		{
			_putchar(format[len]);
		}
		else
		{
			len++;
			switch (format[len])
			{
				case 'c':
					ui =  va_arg(args, int);
					_putchar(ui);
					break;

				case 's':
					str = va_arg(args, char *);
					print_str(str);
					break;

				case '%':
					count++;
					_putchar('%');
					break;
			}
		}
	}
	va_end(args);
	if (count > 0)
	{
		return (len - count);
	}
	return (len);
}
