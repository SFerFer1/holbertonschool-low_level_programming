i#include<stdio.h>


int main(void)
{
char *variabletype[] = {"char",   "int",  "short",  "long",  "long long"};

gcc -m32 6-size.c -o size32


    for (i = 0; i < 11; ++i) {
        
        printf("Size of %s is %zu\n", variabletype[i], sizeof(variabletype[i]));
    }        



        return (0);
}
