#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - print arguments according to a format
 * @format: controls the output given
 * Return: n_printed[ number of characters printed ]
 */

int _printf(const char *format, ...)
{
	va_list args;
	int p, n_printed = 0;
	char *str;

	va_start(args, format);
	p = 0;
	while (format[p] != '\0')
	{
		if (format[p] == '%')
		{
			p++;
			if (format[p] == 'c')
			{
				n_printed++;
				_putchar(va_arg(args, int));
			}
			else if (format[p] == 's')
			{
				str = va_arg(args, char *);
				n_printed += _print_string(str);
			}
			else if (format[p] == '%')
			{
				n_printed++;
				_putchar(format[p]);
			}
			else if (format[p] == 'd' || format[p] == 'i')
				n_printed += print_number(va_arg(args, int));
		}
		else
		{
			n_printed++;
			_putchar(format[p]);
		}
		p++;
	}
	va_end(args);
	return (n_printed);
}
