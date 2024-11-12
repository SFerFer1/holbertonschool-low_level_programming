#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
* string_nconcat - concate nate 1 strina and n chars of a second
*
*@s1: string 1
*@s2: string 2
*@n:  how much of string 2 is writen
*
*Return: if dont work NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int largo = 0, largo2 = 0, i, t;
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
{
free (resultado);	
return (NULL);
}
for (i = 0; i < largo; i++)
{
resultado[i] = s1[i];
}
if (n >= largo2)
{
for (t = 0; t < largo2; i++, t++)
{
resultado[i] = s2[t];
}
resultado[i] = '\0';
}
else
{
for (t = 0; t < n; i++, t++)
{
resultado[i] = s2[t];
}
resultado[i] = '\0';
}
return (resultado);
}
