#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
	va_list args;
	int p, n_printed =0, count;
	char *str;
	va_start(args, format);
	p = 0;

	while (format[p] != '\0')
	{
		if (format[p] != '%')
		{
			n_printed++;
			_putchar(format[p]);
		}
		else
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
				for (count = 0; str[count] != '\0'; count++)
				{
					n_printed++;
					_putchar(str[count]);
				}
			}
			else if (format[p] == '%')
			{
				n_printed++;
				_putchar(format[p]);
			}
		}
		p++;
	}
	va_end(args);
	return(n_printed);
}
