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

for (i = 0; s[i] != '\0'; i++)
{

for (n = 0; accept[n] != '\0'; n++)
{
if (s[i] == accept[n])
{
return (&s[i]);
}
}
}

return (NULL);

}
