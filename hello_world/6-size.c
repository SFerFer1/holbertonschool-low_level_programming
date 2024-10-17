#include<stdio.h>
/*
main - Write script, 
 */
int main(void)
{
char *variabletype[] = {"char", "unsigned char", "signed char", "int", "unsigned int", "short", "unsigned short", "long", "unsigned long", "long long", "unsigned long long"};

int i;
    for (i = 0; i < 11; ++i) {
        // Use sizeof for the actual types instead of the string
        printf("Size of %s is %zu\n", variabletype[i], sizeof(variabletype[i]));
    }        



        return (0);
}
