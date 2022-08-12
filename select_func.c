#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdarg.h>

/**
 * select_func - selects function to be ran by printf
 * @format: string to be printed
 * @args: unknown variable
 * @p: point in format
 * Return: number printed
 */
int select_func(const char *format, va_list args, int p)
{
	char *str;
	int n_printed = 0;

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
	{
		n_printed += print_number(va_arg(args, int));
	}
	else
	{
		if (format[p] == ' ' || format[p] == '\n')
		{
			_putchar(format[p]);
		}
		else if (format[p] == '\0')
			;
		else
		{
			_putchar(format[p - 1]);
			_putchar(format[p]);
			n_printed += 2;
		}
	}
	return (n_printed);
}
