#include "holberton.h"
#include <stdlib.h>
/**
 * _printf - produces output according to a format
* @format: is a character string
* Return: number of letter found
*/
int _printf(const char *format, ...)
{
	int it_for, it_str, cont = 0, change = 0;
	va_list list;
	print_f funct[] = {{"c", print_char}, {"s", print_string},
			   {"i", print_int}, {"d", print_int}};
	va_start(list, format);
	if (format == NULL)
		return (-1);
	for (it_for = 0; format[it_for] != '\0'; it_for++)
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
			change = 0;
			for (it_str = 0; it_str < 5; it_str++)
			{
				if (format[it_for] == *funct[it_str].flag)
				{
					cont += funct[it_str].p(list);
					change = 1;
				}
			}
			if (change == 0)
			{
				_putchar('%');
				_putchar(format[it_for]);
			} }
		else
		{
			_putchar(format[it_for]);
			cont++;
		} }
	va_end(list);
	return (cont);
}
