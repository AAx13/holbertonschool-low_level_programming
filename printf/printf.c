#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
	int len;
	int itr;
	char *str;
	unsigned int ui;
	va_list args;

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
				case 'd': ui = va_arg(args, int);
					print_num(ui);
					break;

				case 'i' : ui = va_arg(args, int);
					print_num(ui);
					break;

				case 'c' : ui =  va_arg(args, int);
					_putchar(ui);
					break;

				case 's' : str = va_arg(args, char *);
					for (itr = 0; str[itr]; itr++)
					{
						_putchar(str[itr]);
					}
					break;

				case '%' : _putchar('%');
					break;
			}
		}
	}
	va_end(args);
	return (len);
}
