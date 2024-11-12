
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

printf('%s',dog.name);
printf('%f',dog.age);
printf('%d',dog.owner);
return (1);
}

