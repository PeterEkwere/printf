#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


#define F_MINUS1
#define F_PLUS2
#define F_ZERO4
#define F_HASH8
#define F_SPACE16


int handle_format_specifier(char format, va_list arguments);
int  _printf(const char *format, ...);
int s_print(va_list arguments);
int print_ch(va_list arguments);
int double_print(va_list arguments);
int int_print(va_list arguments);
int Ubint_pr(va_list arguments);

extern int count;

#endif
