#include <stdio.h>
#include "main.h"


/**
 *  print_alphabet - how to print it
 *
 *  Return:  void
 */
void print_alphabet(void)
	{
	char i=a;

	for (i = 'a'; i < 'z'; i++)
	{
	putchar(i);
	};

	putchar('\n');
}

/**
* main - i print it
*
*  Return:  0
*/
int main(void)
{
	print_alphabet();
	return (0);
}
