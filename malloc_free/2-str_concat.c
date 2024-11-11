#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
 * str_concat -returns a pointer to a newly allocated space in memory
 *
 *@s1: a string
 *@s2: a string
 *
 *Return: null f str = NULL
 */
char *str_concat(char *s1, char *s2)
{
int largo = 0;
int largo2 = 0;
int i;
int n;
char *resultado;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[largo] != '\0')
largo++;

while (s2[largo] != '\0')
largo2++;

resultado  = malloc((largo + largo2) +1);

if (resultado == NULL)
return (NULL);

for (i = 0; i < largo; i++)
{
resultado[i] = s1[i];
}

for (i = 0; n < largo2; i++, n++)
{
resultado[i] = s2[n];
}
resultado[i] = '\0';
return (resultado);
}
