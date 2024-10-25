#include <stdio.h>

/**
 * main - Generate Fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
    unsigned long valoractual = 1;
    unsigned long valoranterior = 2;
    unsigned long cambiovalor;
    int i;


printf("%lu", valoractual);
	printf(", %lu", valoranterior);



    for (i = 2; i < 98; i++) 
    {
        cambiovalor = valoractual + valoranterior;
        printf(", %lu", cambiovalor);

        valoractual = valoranterior;
        valoranterior = cambiovalor;
    }

    printf("\n");
    return (0);
}
