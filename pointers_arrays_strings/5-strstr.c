#include <stddef.h>
#include "main.h"
/**
*  *_strstr - return number bytes ignitial segment
*@haystack:a  char
*@needle: a char
*Return: a char
*
*/
char *_strstr(char *haystack, char *needle)
{
int i = 0, n = 0;

for (i = 0; haystack[i] != '\0'; i++)
{
while (haystack[i + n] == needle[n] && needle[n] != '\0')
{
n++;
}
if (needle[n] == '\0')
{
return (&haystack[i]);
}
}
return (NULL);
}
