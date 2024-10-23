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
int n=0;
int resultado;
for(length=0 ; length <= 9;length++)
{

for(multiplo=0 ; multiplo <= 10; multiplo++)
{
	resultado =n * multiplo; 
if (resultado>= 10 && resultado <= 99)
{
	_putchar((resultado / 10) + '0');
	_putchar((resultado % 10) + '0');
}
else
{
_putchar((resultado) + '0');
}
}
_putchar('\n');
n++;
}
}	
