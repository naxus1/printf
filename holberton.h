#ifndef _FUNTION_PRINTF_H_
#define _FUNTION_Printf_H_

#include <stdarg.h>

int print_int(va_list list);
int print_string(va_list list);
int print_char(va_list list);
int _printf(const char *format, ...);

/**
 * str_print - structure to print
 * @char: first member type
 * @list: second member function
 * Return: Print struct (Success)
 */

typedef struct str_print
{
	char flag;
	int (*p)(va_list list);
}


#endif
