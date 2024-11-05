#include "main.h"
/**
*  _print_rev_recursion - print backward
*@s:a char
*  Return: void
*
*/
void _print_rev_recursion(char *s)
{

if (*s == s[0])
{
return;
}

_putchar(*s)
_print_rev_recursion(s - 1);
}
