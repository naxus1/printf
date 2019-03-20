#ifndef _FUNTION_PRINTF_H_
#define _FUNTION_PRINTF_H_

#include <stdarg.h>

int print_int(va_list list);
int print_string(va_list list);
int print_char(va_list list);
int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct str_print - structure to print
 * @flag: first member type
 * @p: second member function
 *
 */

typedef struct str_print
{
	char flag;
	int (*p)(va_list list);
} print_f;


#endif
