#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
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
	char *format;
	void (*handler_func)(va_list);
} PrintArg;

void handle_format_specifier(char format, va_list arguments);
int  _printf(const char *format, ...);
void s_print(va_list arguments);
void print_ch(va_list arguments);


extern PrintArg  output_converter[];
extern int count;

#endif
