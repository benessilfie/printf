#include "main.h"
/**
 * _printf - a function that produces output according to a format.
 * @format: is a character string.
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
int (*pfunc)(va_list, flagspec_t *);
const char *p;
va_list arguments;
flagspec_t flags = {0, 0, 0};
register int count = 0;
va_start(arguments, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
if (format[0] == '%' && format[1] == ' ' && !format[2])
return (-1);
for (p = format; *p; p++)
{
if (*p == '%')
{
p++;
if (*p == '%')
{
count += _putchar('%');
continue;
}
while (get_flag(*p, &flags))
p++;
pfunc = get_print(*p);
count += (pfunc)
? pfunc(arguments, &flags)
: _printf("%%%c", *p);
}
else
count += _putchar(*p);
}
_putchar(-1);
va_end(arguments);
return (count);
}
