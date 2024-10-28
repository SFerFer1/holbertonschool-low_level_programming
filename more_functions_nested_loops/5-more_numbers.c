#include "main.h"
/**
 * void more_numbers - print for 0 to 14  ten times
 *
 *  Return: nothing
 */
void more_numbers(void)
{
int i;
int n;

for (i = 0 ; i <= 10 ; i++)
{
for (n = 0 ; n <= 14 ; n++)
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
}
_putchar('\n');
}
}
