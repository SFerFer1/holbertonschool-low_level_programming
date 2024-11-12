#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
* malloc_checked -returns 2 dimencional array
*
*@b: a int
*
*Return: null f str = NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int largo = 0;
unsigned int largo2 = 0;
unsigned int i;
unsigned int t;
char *resultado;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[largo] != '\0')
largo++;

while (s2[largo2] != '\0')
largo2++;

resultado  = malloc((largo + largo2) +1);

if (resultado == NULL)
return (NULL);

for (i = 0; i < largo; i++)
{
resultado[i] = s1[i];
}
if (n >= largo2)
{
for (n = 0; t < largo2; i++, t++)
{
resultado[i] = s2[t];
}
resultado[i] = '\0';
}
else
{
for (n = 0; t < n; i++, t++)
{
resultado[i] = s2[t];
}
resultado[i] = '\0';
}

}

return (resultado);
}
