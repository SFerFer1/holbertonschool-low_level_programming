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
int i = 0;
int n = 0;
unsigned int t;
int e = 0;
while (s[i] == '\0')
{
n = 0;
while (accept[e] == '\0')
{
if (s[i] == accept[e])
if (n == 1)
{
t++;
}
e++;
}
i++;
}
return (t);
}
