#include "main.h"
/**
*  puts_half - print half of a string
*@str:a string
*  Return: nothing
*
*/
void puts_half(char *str)
{
int i = 0, j = 0;

while (str[j] != '\0')
{
j++;
}
j--;
j = j / 2;

for (i = 0 ; i < j ; i++)
{
_putchar(str[i]);
}
_putchar('\n');

}
