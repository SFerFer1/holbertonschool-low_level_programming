#include <stdio.h>
/**
 * main - putchar alfabet
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
	 putchar('\n');
	return (0);
}
