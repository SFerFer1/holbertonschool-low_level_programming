#include "main.h"
/**
* **cap_string - copy string pointed with cap
*@n:a char
*Return: void
*
*/
char *cap_string(char *n)
{
int i = 0;
char sep[] = " \t\n,;.!?\"(){}";

if (n[i] >= 'a' && n[i] <= 'z')
{
	n[i] -= i32;
}

while (str[i] != '\0')
		{
for (j = 0; sep[j] != '\0'; j++)
	{
		if (n[i] == sep[j])
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z') 
		{
			n[i + 1] -= 32; 
		}

	}
	}
	i++;
		}
return (n);
}


