#include "function_pointers.h"
/**
 * print_name - prints a name 
 *
 *@name: a int
 *@f: a int
 *
 *Return: null f str = NULL
 */
void print_name(char *name, void (*f)(char *))
{
int i = 0;
int n = 0;

while (name[i] != '\0')
i++;

for ( n = 0 ; n < i ; n++)
_putchar(f(&name[n]));

}
