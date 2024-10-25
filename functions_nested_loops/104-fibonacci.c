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

    printf("%lu, %lu", valoractual, valoranterior);

    for (i = 1; i < 100; i++) 
    {
        cambiovalor = valoractual + valoranterior;
        printf(", %lu", cambiovalor);

        valoractual = valoranterior;
        valoranterior = cambiovalor;
    }

    printf("\n");
    return (0);
}

