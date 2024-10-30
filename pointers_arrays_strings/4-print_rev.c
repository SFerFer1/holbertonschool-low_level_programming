#include "main.h"
/**
*  print_rev - prints a script in rev
*@s:a string
*  Return: nothing
*/
void print_rev(char *s)
{
int i = 0, j = 0;

while (s[j] != '\0')
{
j++;
}
for (i = j ; i >= 0 ; i--)
{
_putchar(s[i]);
}

}
