#include <stdio.h>
/**
*main - combination of 2 digits
*
*Return: Always 0 (Success)
*/
int main(void)
{
int i;
int n;
for (i = 0; i < 10; i++)
{


for (n = i + 1 ; n < 10; n++)
{
	if (n != i)
		{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		
		putchar(' ');

		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		if (i != 8 || n != 9)
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
