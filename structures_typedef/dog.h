
#include <stdio.h>



struct dog
{
char *name;
float age;
char *owner;
};

#include "main.h"
/**
 * main - show dog
 * 
 *  Return:  1
 */
int main(void)
{
struct dog dog1 = {"Blacky", 3.5, "Mark"};

printf("%s",dog1.name);
printf("%f",dog1.age);
printf("%d",dog1.owner);
return (1);
}

