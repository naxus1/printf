#include "holberton.h"
#include <stdio.h>
/**
 *_printf - produces output according to a format                                        * @format: is a character string                                                      
 * Return: number of letter found
*/
int _printf(const char *format, ...)
	       {
	  int it_for, it_str, cont;
	  va_list list;

	 cont = 0;
        print_f funct[] = {
                {'c', print_char},
                {'s', print_string},
                {'i', print_int},
                {'d', print_int},
                {'\0', NULL}
 };
