#include "main.h"
/**
*  rev_string - change a script to rev
*@s:a string
*  Return: nothing
*
*/
void rev_string(char *s)
{
int i = 0, j = 0, n = 0;

while (s[j] != '\0')
{
j++;
}


while (s[n] != '\0')
{



for (i = j ; i >= 0 ; i--)
{
s[n] = s[i];

}
n++;
}
_putchar('\n');
}

