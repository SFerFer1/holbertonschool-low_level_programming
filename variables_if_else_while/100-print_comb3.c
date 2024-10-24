#include <stdio.h>
/**
* main - combination of 2 digits
*
*  Return: Always 0 (Success)
*/
int main(void)
{
int i;
int n;

for (i = 0; i < 10; i++)
{


for (n=0; n < 10; n++)
	{
	if(n != i)
		{
		putchar (i + '0');
		putchar (n + '0');	

		if (i != 9)
			{
			putchar (',');
			putchar(' ');
			}
		}
	}
}
return (0);


}
