#include <stddef.h>
#include "main.h"
/**
* *_strchr - print n of a string
*@s:a  char
*@c:a char
*Return: a char
*
*/
char *_strchr(char *s, char c)
{
int i = 0;

while (s[i] != '\0')
{
	if (s[i] == c)
	{
		return (&s[i]);
	}
i++;
}
return (&s[i]);
}
