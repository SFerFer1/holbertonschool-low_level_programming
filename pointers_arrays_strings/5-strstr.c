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

for (n = 0; needle[n] != '\0'; n++)
{
if (haystack[i] == needle[n])
{
return (&haystack[i]);
}
}
}

return (NULL);

}
