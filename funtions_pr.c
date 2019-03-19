#include "holberton.h"

/**
 * print_char - Print a char
 * @list: argument to print
 *
 */
int print_char(va_list list)
{
	putchar(va_arg(list, int));
	return (1);
}
