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
	
	int lastSign = 1; 
    while (s[*i] == '-' || s[*i] == '+')
{
	if (s[*i] == '-')
	{
	lastSign *= -1;
	}
	(*i)++;
}
return lastSign;
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
int i = 0, num = 0, sign=1;

while (s[i] == ' ')/*verifica si hay espacios en blanco*/
{
	i++;
}

sign = ConocerSigno(s, &i);

if (s[i] == '\0')
{
return (0);
}


while (s[i] >= '0' && s[i] <= '9') {
	num = num * 10 + (s[i] - '0');
	i++;
}


return (num * sign);
}
