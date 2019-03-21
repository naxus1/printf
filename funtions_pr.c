#include "holberton.h"
/**
 * print_char - Print a char
 * @list: argument to print
 *
 * Return: 0 if false, something else otherwise.
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - Pring to string
 * @list: argument to print
 * Return: 0 if false, something else otherwise.
*/
int print_string(va_list list)
{
	char *p = va_arg(list, char *);
	int i_st;

		for (i_st = 0; p[i_st] != '\0'; i_st++)
		{
			_putchar(p[i_st]);
		}
		return (i_st);
}

/**
 * print_int - Print integer
 * @list:argument to print
 * Return: 0 if false, something else otherwise.
 */
int print_int(va_list list)
{
	int p = va_arg(list, int), rev_num = 0;
	int crash = 0, result = 0, cont = 0, last_digit = 0;

	if (p < 0)
	{
		_putchar('-');
		p *= -1;
	}

	last_digit = p % 10;
	p = p / 10;

	while (p > 0)
	{
		rev_num = rev_num * 10 + p % 10;
		p = p / 10;
	}

	while (crash == 0)
	{
		if (rev_num / 10 != 0)
		{
			result = rev_num % 10;
			_putchar(result + '0');
			rev_num = rev_num / 10;
			cont++;
		}
		else
		{
			_putchar(rev_num + '0');
			crash = 1;
			cont++;
		}
	}
	_putchar(last_digit + '0');
	cont++;
	return (cont);
}
