#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_dec(va_list d);
int print_hex(va_list x);
int print_HEX(va_list X);
int print_octal(va_list o);
int print_bin(va_list b);
int print_unsigned(va_list u);
int print_rot13(va_list R);
int print_rev(va_list r);
int print_int(va_list i);
int print_S(va_list S);
int print_p(va_list p);
void _puts(char *str);
int _strlen(char *s);
char *convert_to(char representation[], unsigned int num, int base);
int function_manager(char c, va_list arg);
int _switch(char c, va_list arg);
int print_character(va_list arg);
int print_sign(va_list arg, int base);
int print_string(va_list arg);
int print_ptr(va_list arg);
int loop_format(va_list arg, const char *string);
int call_function_manager(char aux, va_list arg);
int check_percent(int *flag, char aux);
/**
 * struct code_format - structure format
 * @sc: specifier
 * @f: function associated
 */
typedef struct code_format
{
char *sc;
int (*f)(va_list);
} code_f;
#endif
