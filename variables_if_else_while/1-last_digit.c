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
	printf("Last digit of %d is %d\n", n, n % 10);
	return (0);
}
