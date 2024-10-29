#include "main.h"
/**
*  _strlen - retun legth of script
*@s:a string
*  Return: retun length of the string
*/
int _strlen(char *s)
{
int i = 0;

while (s[i] != 0)
i++;

return (i);
}
