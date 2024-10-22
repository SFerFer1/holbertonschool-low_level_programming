#include <stdio.h>
#include "main.h"
/**
 *  print_alphabet_x10 - how to print it ten times
 *
 *  Return:  void
 */
void print_alphabet_x10(void)
{
	char i = 'a';
	int n;

	for (n = 0; n < 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
