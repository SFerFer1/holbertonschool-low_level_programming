#include "main.h"
/**
*  _atoi - simulate aoti
*@s:a char
*
*  Return: char the pointer to dest
*
*/
int _atoi(char *s)
{
int i = 0, j = 0, signo = 1;

while (s[j] != '\0')
{
j++;
}

if (j == 0)
{
return (0);
}
else
{
while (s[i] == ' ') 
{
	i++;
}
if (s[i] == '-')
{}
signo =-1;
i++;
}
else if (s[i] == '+')
{
signo =+1;
i++;
}
while (dest[i] != '\0')
{
dest[i] = src[i];
i++;
}

}
return (0);
}
