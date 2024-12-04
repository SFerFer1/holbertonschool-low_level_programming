#include <stddef.h>
#include "main.h"
/**
* print_binary-returns 2 dimencional array.
*
*@n: a binari number.
*
*/
void print_binary(unsigned long int n)
{
int started = 0;
int i;
unsigned long int bit;

if (n == 0)
{
putchar('0');
return;
}
for (i = 63; i >= 0; i--)
{
bit = (n >> i) & 1;

if (bit == 1)
{
putchar('1');
started = 1;
}
else if (started)
putchar('0');

}
}
