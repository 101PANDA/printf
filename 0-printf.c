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

	if (format == NULL)
	{
		_putchar('\n');
		return (0);
	}
	va_start(args, format);
	p = 0;
	while (format[p] != '\0')
	{
		if (format[p] == '%')
		{
			n_printed += select_func(format, args, p);
			p++;
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
