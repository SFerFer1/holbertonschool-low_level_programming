#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all -returns a pointer to a newly allocated space in memory
 *
 *@n: a string
 *@format: the string
 *
 *Return: null f str = NULL
 */
void print_all(const char * const format, ...)
{
int z = 0;
va_list args;
const char *str;
char c;
int i;

va_start(args, format);
str = va_arg(args, const char*);
switch (format)
{
case c:
breaik;
}
char format = 'c';  // Se define 'format' como un carácter

switch (format)
{
    case 'c': 
i = 2;
c="c";
break;
default:
break;
}







printf("%s", str);
z++;
}
