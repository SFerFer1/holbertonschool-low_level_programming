#include <stdio.h>
/**
 * main - print _putchar
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	char string[] = "_putchar";

	for (int i = 0; string[i] != '\0'; i++)
	{
	putchar(string[i]);
	}
	putchar('\n');
	return (0);
}
