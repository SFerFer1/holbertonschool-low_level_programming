#include "main.h"
/**
*  *_strcat - copy string pointed
*@dest:a char
*@src:a char
*  Return: char the pointer to dest
*
*/
char *_strcat(char *dest, char *src)
{
char *ret = dest;

while (*dest != '\0') 
{
dest++;
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (ret);
}
