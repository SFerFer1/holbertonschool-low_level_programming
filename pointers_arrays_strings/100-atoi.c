#include "main.h"
/**
*  ConocerSigno - saber el signo y devolverlo por -1
*@s:a char
*@i: a int
*  Return:  -1 or 1
*
*/
int ConocerSigno(char *s, int *i)
{
if (s[*i] == '-') 
{
        (*i)++;
return -1;
}
else if (s[*i] == '+') 
{
        (*i)++;
}
return 1;
}
/**
*  _atoi - simulate aoti
*@s:a char
*
*  Return: char the pointer to dest
*
*/
int _atoi(char *s)
{
int i = 0, j = 0;

while (s[j] != '\0')
{
j++;
}

if (j == 0)
{
return (0);
}
while (s[i] == ' ') 
{
	i++;
}
return (0);
}


