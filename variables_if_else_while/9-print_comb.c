#include <stdio.h>
/**
 * main - combination single digit
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;

for (i = 0; i < 10; i++)
{
putchar (i + '0');
if (i != 9)
{
putchar (',');
};
};
	return (0);
}
