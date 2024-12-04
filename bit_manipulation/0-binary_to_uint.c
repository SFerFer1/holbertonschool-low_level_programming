#include <stdlib.h>
#include <stddef.h>
#include "main.h"
/**
* binary_to_uint -returns 2 dimencional array
*
*@b: a binari number
*
*
*Return:  yhe number in int
*/
unsigned int binary_to_uint(const char *b)
{
int i = 0;
int n = 0;
unsigned int multiplicador = 1;
unsigned int Total = 0;
while (b[i] != '\0')
{
i++;
}
for (n = i; n >= 0;n--)
{
if (b[n] == '1')
Total += multiplicador;

multiplicador *=2;
}
return (multiplicador);
}
