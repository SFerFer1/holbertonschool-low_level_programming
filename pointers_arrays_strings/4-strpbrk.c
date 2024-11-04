#include <stddef.h>
#include "main.h"
/**
*  *_strpbrk - return number bytes ignitial segment
*@s:a  char
*@accept: a char
*Return: a char
*
*/
char *_strpbrk(char *s, char *accept)
{
int i = 0, n = 0;
 int t = 0;

for (i = 0; s[i] != '\0'; i++)
{

for (n = 0; accept[n] != '\0'; n++)
{
if (s[i] == accept[n])
{
t = s[i];
break;
}
}

}
if (t != 0)
{
return (NULL);
}
return (&t);
}

