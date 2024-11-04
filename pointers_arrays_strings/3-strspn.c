#include "main.h"
/**
*  _strspn - return number bytes ignitial segment
*@s:a  char
*@accept: a char
*Return: unsigned int
*
*/
unsigned int _strspn(char *s, char *accept)
{
int i = 0 , n = 0 ,e = 0;
unsigned int t;

for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[i] == accept[n])
{
t = 1;
break;
}
}
if (!t) 
{
break;
}

t++
}
return (t);
}
