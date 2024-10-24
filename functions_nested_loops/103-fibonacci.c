#include <stdio.h>

/**
 * main - calculate the sum of even Fibonacci numbers less than 4 million
 *
 * Return: 0
 */
int main(void)
{
	long valoractual = 1;
	long valoranterior = 2;
	long cambiovalor;
	long valortotal = 0;

	while (valoractual <= 4000000)
	{
	if (valoractual % 2 == 0)
	{
	valortotal += valoractual;
	}
	cambiovalor = valoractual + valoranterior;
	valoractual = valoranterior;
	valoranterior = cambiovalor;
	}
	printf("%ld\n", valortotal);
	return (0);
}

