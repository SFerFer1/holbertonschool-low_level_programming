#include "main.h"
/**
* _strcmp - copy string pointed
*@s1:a char
*@s2:a char
*  Return: a int
*
*/
int _strcmp(char *s1, char *s2)
{
int ta1 = 0 ,ta2 = 0; 

while (*s1 != '\0')
{
s1++;
ta1++;
}
while (*s2 != '\0')
{
s2++;
ta2++;
}
s1 = 0;
s2 = 0;

if( ta1 > ta2 )
{
return (1);
}
else if (ta2 > ta1)
{
return (-1);
}
else
{
return (0);
}
}
