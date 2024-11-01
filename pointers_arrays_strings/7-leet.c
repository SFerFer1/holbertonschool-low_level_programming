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
for (int i = 0; n[i] != '\0'; i++)
{
for (int j = 0; j < 10; j++)
{
if (n[i] == words[j])
{
n[i] = numbers[j]
}
}
}
return (n);
}
