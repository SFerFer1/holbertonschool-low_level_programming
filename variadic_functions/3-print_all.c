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
int i = 0;
va_list args;
char *str;
char c;
int i;
float f;

va_start(args, format);
while(format != NULL && format[i] != '\0' )
{
str = va_arg(args, const char*);
if(format[i]=="c")
{
i =va_arg(args, const char*);
printf("%d", i);
}
else if (format[i]=="c")
{
c =va_arg(args, const char*);
printf("%c", c);
}





printf("%s", str);


i++;
}
}
