#ifndef _FUNTION_PRINTF_H_
#define _FUNTION_Printf_H_

#include <stdarg.h>

typedef struct str_print
{
	char flag;
	int (*p)(va_list list);
}


#endif
