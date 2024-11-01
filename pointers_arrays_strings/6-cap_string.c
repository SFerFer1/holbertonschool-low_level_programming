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
	n[i] -= 32;
}

while (n[i] != '\0')
		{
for (j = 0; sep[j] != '\0'; j++)
	{
		if (n[i] == sep[j])
	{
		if (n[i + 1] >= 'a' && n[i + 1] <= 'z') 
		{
			n[i + 1] -= 32; 
		}

	}
	}
	i++;
		}
return (n);
}


