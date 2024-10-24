#include "main.h"
/**
 * print_times_table - prints the times table up to n
 * @n: the size of the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
    int length, multiplo, resultado;

    if (n < 0 || n > 15)
        return;

    for (length = 0; length <= n; length++)
    {
        for (multiplo = 0; multiplo <= n; multiplo++)
        {
            resultado = length * multiplo;

            if (multiplo != 0)
                _putchar(',');
	 if (multiplo == 0 )
	 _putchar('0'); 
	    else if (resultado < 10 )
                _putchar(' '), _putchar(' '), _putchar('0' + resultado);
            else if (resultado < 100)
                _putchar(' '), _putchar('0' + resultado / 10), _putchar('0' + resultado % 10);
            else
                _putchar('0' + resultado / 100), _putchar('0' + (resultado / 10) % 10), _putchar('0' + resultado % 10);
        }
        _putchar('\n');
    }
}

