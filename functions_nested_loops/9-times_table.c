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
for(length=0 ; length <= 9;length++)
{

for(multiplo=0 ; multiplo <= 10; multiplo++)
{
_putchar((n * multiplo) + '0');
}
_putchar('\n');
n++;
}
}	
