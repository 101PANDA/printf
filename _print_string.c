#include "main.h"

/**
 * _print_string - prints content of a string
 * @str: the string to be printed
 * Return: count[ number of elements printed ]
 */

int _print_string(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}

	return (count);
}
