#include <stdio.h>

/**
 * main - Generate Fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
    unsigned long valoractual = 1;
    unsigned long valoranterior = 1;
    unsigned long cambiovalor;
    int i;


printf("%lu", valoranterior);
	printf(", %lu", valoractual);



    for (i = 2; i < 98; i++) 
    {
        cambiovalor = valoractual + valoranterior;
        printf(", %lu", cambiovalor);

         valoranterior =valoractual;
        valoractual = cambiovalor;
    }

    printf("\n");
    return (0);
}
