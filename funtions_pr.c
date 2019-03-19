#include "holberton.h"
/**
 * print_char - Print a char
 * @list: argument to print
 */
int print_char(va_list list)
{
	putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - Pring to string
 * @list: argument to print
 */
int print_string(va_list list)
{
	char *p = va_arg(list, char *);
	int i_st;

	while (p[i_st])
	{
		putchar(p[i_st]);
		i_st++;
	}
	return(i_st);

}

int print_int(va_list list)
{
	int p = va_arg(list, int), rev_num = 0;
	int crash = 0, result = 0;

	while(p > 0)
	{
		rev_num = rev_num * 10 + p % 10;
		p = p / 10;
	}


}
