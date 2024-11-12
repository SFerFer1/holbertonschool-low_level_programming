
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


/**
 * main - show dog
 * 
 *  Return:  1
 */
int main(void)
{
struct dog  dog1;

dog dog1 
dog1.name ="Blacky"
dog1.age = "3.5"
dog1.owner = "Mark"

printf("%s",dog1.name);
printf("%.2f",dog1.age);
printf("%s",dog1.owner);
return (0);
}

