#include <stdio.h>

int main(void)
{
    unsigned long valor1 = 1, valor2 = 2, siguiente;
    int i;

    printf("%lu", valor1); 

    printf(", %lu", valor2);

    
    for (i = 2; i < 98; i++)
    {
        siguiente = valor1 + valor2;
        printf(", %lu", siguiente);

        valor1 = valor2;
        valor2 = siguiente;
    }

    printf("\n");
    return 0;
}

