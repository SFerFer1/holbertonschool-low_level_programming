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


for (i = 0 ; i < j ; i++)
{
if(i >= (j / 2))
{
_putchar(str[i]);
}
}
_putchar('\n');

}
