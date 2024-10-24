#include <stdio.h>

/**
 * main - calculate the sum of even Fibonacci numbers less than 4 million
 *
 * Return: 0
 */
int main(void)
{
    long valoractual = 1;   // Primer número de Fibonacci
    long valoranterior = 2; // Segundo número de Fibonacci
    long cambiovalor;
    long valortotal = 0;    // Inicializa la suma en 0

    // Bucle para calcular números de Fibonacci hasta 4,000,000
    while (valoractual <= 4000000)
    {
        // Verifica si el número actual es par
        if (valoractual % 2 == 0)
        {
            valortotal += valoractual; // Suma solo los números pares
        }

        // Calcula el siguiente número de Fibonacci
        cambiovalor = valoractual + valoranterior; // Siguiente número
        valoractual = valoranterior; // Mueve valoractual al siguiente
        valoranterior = cambiovalor;  // Actualiza valoranterior
    }

    // Imprime la suma total de los números de Fibonacci pares
    printf("%ld\n", valortotal);

    return (0);
}

