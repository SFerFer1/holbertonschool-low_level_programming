#include "main.h"
/**
*  rev_string - change a script to rev
*@s:a string
*  Return: nothing
*
*/
void rev_string(char *s)
{
int i = 0, j = 0, n = 0;
char cambio;

while (s[j] != '\0')
{
j++;
}


while (i < j)
{

cambio = s[i]; 
s[i] = s[j];
s[j] = cambio;
i++;
j--;
}


}
