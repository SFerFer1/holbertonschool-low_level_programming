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
char numbers[] = "4433007711";
char words[] = "aeotlaAEOTLA";   
for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == words[j])
{
n[i] = numbers[j];
}
}
}
return (n);
}
