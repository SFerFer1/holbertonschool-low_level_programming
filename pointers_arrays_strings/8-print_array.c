#include<stdio.h>
#include "main.h"
/**
*  print_array - print n of a string
*@a:a  int
*@n:a int
*  Return: nothing
*
*/
void print_array(int *a, int n)
{
int i;

for (i = 0 ; i < n ;i++)
{
printf("%d", a[i]);
if (i < n ) 
{
printf(", ");
}
}
_putchar('\n');
}
