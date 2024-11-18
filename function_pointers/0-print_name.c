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

while (name[i] != 'R')
{
f(&name[i]);
i++;
}

}
