#include "main.h"
/**
 *  times_table - prints time table
 *
 *  Return: void
 */
void print_times_table(int n)
{
int length;
int multiplo;
int resultado;

if (n < 15 && n > 0){
for (length = 0 ; length <= n; length++)
{

for (multiplo = 0 ; multiplo < n ; multiplo++)
{
        resultado = n * multiplo;
if (resultado >= 10 && resultado <= 99)
{
        _putchar('0' + (resultado / 10));
        _putchar('0' + (resultado % 10));
}
/**
else if (resultado >= 100 && resultado <= 999)
{
_putchar('0' + (resultado / 10));
_putchar('0' + (resultado / 10) % 10);
_putchar('0' + (resultado % 10));
}
**/
else
{
if (multiplo != 0)
{
_putchar(' ');
}
_putchar('0' + (resultado));
}
if (multiplo != n)
        {
        _putchar(',');
        _putchar(' ');
        }
}
_putchar('\n');
n++;
}
}
}
