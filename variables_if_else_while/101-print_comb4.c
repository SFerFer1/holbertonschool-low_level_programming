#include <stdio.h>
/**
* main - combination of 3 digits
*
*  Return: Always 0 (Success)
*/
int main(void)
{
int i;
int n;
int t;
for (i = 0; i < 10; i++)
{
for (n = i + 1 ; n < 10; n++)
{

for (t = n + 1 ; t < 10; n++)
{

	putchar (i + '0');
	putchar (n + '0');
	putchar (t + '0');
	

if (i != 9 || n != 8 || t != 7 )
{
	putchar (',');
       	putchar(' ');
}




}                        
}
}
putchar('\n');
return (0);


}
