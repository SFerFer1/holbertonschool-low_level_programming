#include<stdio.h>
#include <unistd.h>
/**
 * main - writ a script
 *
 *  Return: Always 1 (Success)
 */
int main(void)
{
write(STDOUT_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 66);
return (1);
}
