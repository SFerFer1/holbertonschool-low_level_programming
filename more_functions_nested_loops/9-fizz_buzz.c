#include <stdio.h>
/**
*  main - 1 al 100 
*
*  Return: nothing
*/
int main(void)
{
int i;

for (i=1 ; i <= 100 ; i++)
	{

if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
printf(" ");
}
else if (i % 3 == 0)
	{
	printf("Fizz");
	printf(" ");
	}
else if (i % 5 == 0)
{      
	printf("Buzz");
	if (i != 100)
	{
	printf(" ");
	}
}
else 
{
printf("%d" , i);
printf(" "); 
}
}
return (0);
}
