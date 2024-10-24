#include <stdio.h>

/**
 *  main - create fibonachi
 *
 *  Return: 0
 */
int main(void)
{


long valoractual = 1;
long valoranterior = 2;
long cambiovalor;

do
{
if (cambiovalor < 4000000) // Verificamos antes de imprimir
        {
            printf("%ld\n", cambiovalor);
        }
        valoranterior = valoractual;
        valoractual = cambiovalor;
}
while (cambiovalor < 4000000);




return (0);
}
