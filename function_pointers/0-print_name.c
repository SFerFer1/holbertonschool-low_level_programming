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

while (name[n] != '\0')
n++;

for (i = 0; i < n; i++)
f(&name[i]);

}
