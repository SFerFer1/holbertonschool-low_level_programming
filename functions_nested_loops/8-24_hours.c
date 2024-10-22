#include <stdio.h>
#include "main.h"
/**
 *  jack_bauer - print jack bauer
 *
 *  Return: void
 */

void jack_bauer(void)
{

	int hour;
	int minutes;

	for (hour = 0; hour < 24 ; hour++)
	{
	for (minutes = 0; minutes < 60 ; minutes++)
	{
	_putchar(hour / 10 + '0');
	_putchar(hour % 10 + '0');
	_putchar(':');
	_putchar(minute / 10 + '0');
	_putchar(minute % 10 + '0');
	_putchar('\n');
	}
	}
}
