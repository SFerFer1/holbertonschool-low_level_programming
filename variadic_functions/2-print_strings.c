#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_strings -returns a pointer to a newly allocated space in memory
 *
 *@n: a string
 *@separator: the string
 *
 *Return: null f str = NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
const char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, const char*);

if (str == NULL)
{
str = "(nil)";
}
if (i > 0 && separator != NULL)
{
printf("%s", separator);
}
printf("%s", str);



}
va_end(args);

printf("\n");
}
