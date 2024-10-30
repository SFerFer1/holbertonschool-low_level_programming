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
char cambio;

while (s[j] != '\0')
{
j++;
}

while (n < j)
{
t = 0;
while (i < j)
{
if(t ==0)
{

cambio = s[i]; 
s[i] = s[j];
s[j] = cambio;

t++;
}
i++;
}
n++;

}

}

