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
/**
 * struct PrintArg - is a datatype designed for format specifying
 *
 * @format: is format to be checked for in the printf
 * @handler_func: is the corresponding function for the format
 *
 * Description:
 * This structure is used to hold information related to format specifiers
 * in the printf function. The format string in the format member is checked
 * against the input string to determine whether or not the corresponding
 * handler function should be called. The handler function pointer in the
 * handler_func member points to the function that will be called if the
 * format string matches the input string.
 */
typedef struct PrintArg
{
	char format;
	int (*handler_func)(va_list);
} PrintArg;

int handle_format_specifier(char format, va_list arguments);
int _printf(const char *format, ...);
int s_print(va_list arguments);
int print_ch(va_list arguments);
int double_print(va_list arguments);
int int_print(va_list arguments);
int Ubint_pr(va_list arguments);
int percent_pr(va_list arguments);
int print_X(va_list arguments);
int print_hex(va_list arguments);
int print_o(va_list arguments);
int uint_print(va_list arguments);


extern PrintArg output_converter;
extern int count;

#endif
