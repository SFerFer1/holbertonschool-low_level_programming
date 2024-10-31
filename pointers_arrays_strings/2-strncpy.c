#include "main.h"
/**
* *_strncpy - copy string pointed
*@dest:a char
*@src:a char
*@n: a number
*  Return: char the pointer to dest
*
*/
char *_strncpy(char *dest, char *src, int n)
{
char *ret = dest;

while (*dest != '\0')
{
dest++;
}
for (int i = 0; i < n && *src != '\0'; i++)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return ret;
}
