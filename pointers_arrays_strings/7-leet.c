#include "main.h"
/**
* *leet - copy string pointed with cap
*@n:a char
*Return: char
*
*/
char *leet(char *n)
{
int i = 0;
int j = 0;
char array[] = {'a', 'e', 'o', 't', 'l'};

while (n[i] != '\0')
{
for (j = 0; array[j] != '\0'; j++)
{
if (n[i] == array[j])
{
array[j] -= 32;
}
}
i++;
}
return (n);
}
