#include "main.h"
/**
 * print_most_numbers - print for 0 to 9 exept 2 and 4
 *
 *  Return: nothing
 */
void print_most_numbers(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
if (i != 2)
{
if (i != 4)
{
_putchar(i + '0');
}
}

}
_putchar('\n');

}