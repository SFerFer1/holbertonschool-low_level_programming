#include <stdio.h>
#include <ctype.h>
/**
 * main - alfabeto sube y baja
 *
 *  Return: Always 0 (Success)
 */


int main(void)
{
char alphabet = 'a';
	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	alphabet = 'A';
	while (alphabet <= 'Z')
	{
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');
return (0);
}
