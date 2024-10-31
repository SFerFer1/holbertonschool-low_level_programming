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


while (*n != '\0')
{
if(n[i] >=  'a'  && n[i] <= 'z' )
{
*n =*n - 32;
}
n++;



}
*n = '\0';
return (n);


}
