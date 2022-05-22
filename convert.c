#include "main.h"
/**
 * convert - ............
 * @num: ..........
 * @base: ...........
 * @lowercase: .........
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
static char *rep;
static char buffer[50];
char *pointr;
rep = (lowercase)
? "0123456789abcdef"
: "0123456789ABCDEF";
pointr = &buffer[49];
*pointr = '\0';
do
{
*--pointr = rep[num % base];
num /= base;
} while (num != 0);
return (pointr);
}
