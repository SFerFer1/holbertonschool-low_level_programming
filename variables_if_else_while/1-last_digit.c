#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - say if a random number is positive or negative
 *
 *  Return: Always 0 (Success)
 */
int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
	printf("Last digit of %d is and is greater than 5 ", n);
	}
	else if (n % 10 == 0)
	{
	printf("Last digit of %d is and is 0 ", n);
	}
	else if (n % 10  != 0 && n %  10 < 6)
	{
	printf("Last digit of %d is and is less than 6 and not 0", n);
	}

	return (0);
}
