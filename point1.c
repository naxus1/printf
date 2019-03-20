#include "holberton.h"
#include <stdlib.h>
/**
 * _printf - produces output according to a format
* @format: is a character string
* Return: number of letter found
*/
int _printf(const char *format, ...)
{
	int it_for, it_str, cont;
	va_list list;
	print_f funct[] = {{"c", print_char}, {"s", print_string},
			   {"i", print_int}, {"d", print_int}};

	va_start(list, format);
	cont = 0;

	if (format == NULL)
		return (-1);
	for (it_for = 0; format[it_for] != '\0' && format != NULL; it_for++)
	{
		if (format[it_for] == '%' && format[it_for + 1] == '%')
		{
			_putchar('%');
			it_for++;
			cont++;
		}
		else if (format[it_for] == '%')
		{
			it_for++;
			for (it_str = 0; it_str < 4; it_str++)
			{
				if (format[it_for] == *funct[it_str].flag)
					cont += funct[it_str].p(list);
			}
		}
		else
		{
			_putchar(format[it_for]);
			cont++;
		}
	}
	va_end(list);
	return (cont);
}
