#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>

int _printf(const char *format, ...);

int _putchar(char c);
int _print_string(char *str);
int print_number(int n);
int select_func(const char *format, va_list args, int p);
int print_binary(unsigned long int n);

#endif
