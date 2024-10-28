#include "main.h"
/**
*  print_square - print a square
*@size: Tama√o del cuadrado
*  Return: nothing
*/
void print_square(int size)
{
int i;
int n;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0 ; i < size ; i++)
{

for (n = 0 ; n < size ; n++)
{
_putchar('#');

}
_putchar('\n');
}
}
}
