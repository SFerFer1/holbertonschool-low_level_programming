#include "main.h"
/**
*  print_triangle - print a triangle
*@size: Tamao del trianguo
*  Return: nothing
*/
void print_triangle(int size)
{
int i;
int n=0;
int t;

if (size <= 0)
{
_putchar('\n');
}
else 
{
for (i = size ; i > 0 ; i++)
{
while (t < n)
{
_putchar('#');
n++;
}
_putchar('#');
}
}

}
	}
