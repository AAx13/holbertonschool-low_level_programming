#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - function that produces output according to a format.
 * @len: Stores length of output string.
 * @itr: Used to iterate through a string.
 * @count: Used to augment length of output string based on escaped '%' chars.
 * @str: Used to store argument of type char *.
 * @ui: Used to store argument of type int or unsigned int.
 * @args: Used as a pointer to arguments of type va_list passed to the function.
 *
 * Return: Number of characters printed (excluding null byte for strings).
 */
int _printf(const char *format, ...)
{
	int len;
	int itr;
	int count;
	char *str;
	unsigned int ui;
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
					for (itr = 0; str[itr]; itr++)
					{
						_putchar(str[itr]);
					}
					break;

				case '%':
					count++;
					_putchar('%');
					break;

				case 'd':
					ui = va_arg(args, int);
					print_num(ui);
					break;

				case 'i':
					ui = va_arg(args, int);
					print_num(ui);
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
