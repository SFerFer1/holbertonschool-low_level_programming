#include<stdio.h>
#include "main.h"
/**
*  _puts_recursion - simulate puts
*@s:a char
*  Return: void
*
*/
void _puts_recursion(char *s)
{
int i = 0;
int n = 0;
while(s[i] != '\0')
{
n++;
i++;
}

for(i = 0 ; i < n ; i++)
{
_putchar(s[i]);
}

}
