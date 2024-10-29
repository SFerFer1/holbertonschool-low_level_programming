#include "main.h"
/**
*  print_triangle - print a triangle
*@size: Tamao del trianguo
*  Return: nothing
*/
void print_triangle(int size)
{
int i;
int n = 0;
int t = 0;
int j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1 ; i <= size ; i++)
{
n = size - i;
while (t < n)
{
_putchar(' ');
t++;
}
for (j = 0 ; j < i ; j++)
{
_putchar('#');
t = 0;
}
_putchar('\n');
{

}
}

}

}

