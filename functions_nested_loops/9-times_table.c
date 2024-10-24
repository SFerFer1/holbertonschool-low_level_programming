#include <stdio.h>
#include "main.h"
/**
 *  times_table - prints time table
 *
 *  Return: void
 */
void times_table(void)
{
int length;
int multiplo;
int n = 0;
int resultado;
for (length = 0 ; length <= 9; length++)
{

for (multiplo = 0 ; multiplo < 10; multiplo++)
{
	resultado = n * multiplo;
if (resultado >= 10 && resultado <= 99)
{
	_putchar('0' + (resultado / 10));
	_putchar('0' + (resultado % 10));
}
else
{
if (multiplo != 0)
{
_putchar(' ');
}
_putchar('0' + (resultado));
}
if (multiplo != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
}
_putchar('\n');
n++;
}
}
