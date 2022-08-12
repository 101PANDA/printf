#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: unsigned long int.
 *
 * Return: no return.
 */
int print_binary(unsigned long int n)
{
	int n_printed = 0;
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		n_printed++;
		_putchar((n & 1) + '0');
	}
	else
	{
		n_printed++;
		_putchar('0');
	}
	return (n_printed);
}
