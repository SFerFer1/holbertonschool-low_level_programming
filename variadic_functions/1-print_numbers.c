#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers -returns a pointer to a newly allocated space in memory
 *
 *@n: a string
 *@separator: the string
 *
 *Return: null f str = NULL
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;

va_start(args, n);

for (i = 0; i < n; i++)
{
if (separator != NULL && i > 0)
{
printf("%s", separator);
}
printf("%d", va_arg(args, int));
}

va_end(args);

printf("\n");
}
