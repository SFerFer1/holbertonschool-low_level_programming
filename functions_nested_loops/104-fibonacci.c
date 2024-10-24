#include <stdio.h>
/**
 * main - until
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

    for (i = 1; i < 92; i++)
    {
        if (i == 1) {
            printf(", %lu", valoranterior);
            continue;
        }

        cambiovalor = valoractual + valoranterior;
        printf(", %lu", cambiovalor);

        valoractual = valoranterior;
        valoranterior = cambiovalor;
    }

    printf("\n");
    return (0);
}
