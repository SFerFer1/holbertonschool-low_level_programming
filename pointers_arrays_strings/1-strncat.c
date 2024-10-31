#include "main.h"
/**
*  *_strncat - combine n caracters
*@dest: a string
*@src: a string
*@n:a int
*  Return: a char
*
*/
char *_strncat(char *dest, char *src, int n)
{
char *ret = dest;
int i = 0;

while (*dest != '\0')
{
dest++;
}

while (i < n  &&  *src != '\0')
{
*dest = *src;
dest++;
src++;
i++;
}



return (ret);
}
