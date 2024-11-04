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
int i = 0, n = 0, nlargo = 0,contador = 0,contador2 = 0;

for (n = 0; needle[n] != '\0'; n++)
{
nlargo++;
}
for (i = 0; haystack[i] != '\0'; i++)
{

for (n = 0; needle[n] != '\0'; n++)
{

while (contador != nlargo)
{
if (haystack[i] == needle[n])
{
contador2++;

}

if (haystack[i] == ' ' || haystack[i] == ',')
{
contador = 0;
}
contador++;

if (contador2 == nlargo)
{
return (&haystack[i]);
}
}
}
}

return (NULL);
}
