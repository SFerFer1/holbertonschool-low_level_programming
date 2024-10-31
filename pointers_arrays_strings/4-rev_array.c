#include "main.h"
/**
* reverse_array - copy string pointed
*@a:a int
*@n:a int
*  Return: void
*
*/
void reverse_array(int *a, int n)
{
int  t = 0 ;


while (t < (n-1))
{
 int temp = a[t];
a[t] = a[(n-1)];
a[(n-1)] = temp;
t++;
}


}
