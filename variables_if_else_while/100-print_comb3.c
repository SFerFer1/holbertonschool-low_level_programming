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

for (i = 0; i < 100; i++)
{


for (n = i + 1 ; n < 100; n++)
	{i
	if (n != i)
		{
		putchar((i / 10) + '0'); 
		putchar((i % 10) + '0');
	   	
	    putchar(' ');

	    	putchar((j / 10) + '0');
		putchar((j % 10) + '0'); 
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