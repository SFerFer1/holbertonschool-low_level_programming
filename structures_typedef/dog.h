
#include <stdio.h>
/**
 * dog- is a dog 
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 */
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
printf("%s",dog1.owner);
return (1);
}

