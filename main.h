#ifndef HEADER_F
#define HEADER_F
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flagSpecifier - ....
 * @add: ...
 * @bckspc: ...
 * @hash: ...
 */
typedef struct flagSpecifier
{
int add;
int bckspc;
int hash;
} flagSpecifier_t;
/**
 * struct formatSpecifier - ....
 * @c: format specifier
 * @f: pointer to the correct printing function
 */
typedef struct formatSpecifier
{
char c;
int (*f)(va_list ap, flagSpecifier_t *f);
} fs;
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flagSpecifier_t *);
int get_flag(char s, flagSpecifier_t *f);
int _putchar(char c);
#endif
