#include "main.h"
/**
*  rev_string - change a script to rev
*@s:a string
*  Return: nothing
*
*/
void rev_string(char *s)
{
int i = 0, j = 0, n = 0, t = 0;

while (s[j] != '\0')
{
j++;
}

while (s[j] != '\0')
{
t = 0;
for (i = j-1 ; i >= 0 ; i--)
{
if(t ==0)
{
s[i] = s[n];
t++;
}
}
n++;

}

_putchar('\n');
}

