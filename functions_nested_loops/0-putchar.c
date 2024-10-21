#include <unistd.h>

/**
 * _putchar - print _putchar to
 *
 *  Return:  0 always
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
/**
 * print_putchar - estructure
 *
 *  Return:  0
 */
void print_putchar(void)
{
	char string[] = "_putchar";

	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
	_putchar(string[i]);
	}
	_putchar('\n');
}
/**
 * main - print _putchar
 *
 *  Return:  0 always
 */
int main(void)
{

        _putchar('_');
	_putchar('p');
	_putchar('u');
        _putchar('t');
        _putchar('c');
        _putchar('h');
        _putchar('a');
        _putchar('r');
	return (0);
}
