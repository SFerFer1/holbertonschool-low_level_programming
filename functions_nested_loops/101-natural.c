#include <stdio.h>

/**
*  main - multiploes of 3 or 5
*
*  Return: 0 always
*/
int main(void)
{
	int i;
	long resultado;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			resultado = resultado + i;
	}
		printf("%ld\n", resultado);
	return (0);
}
