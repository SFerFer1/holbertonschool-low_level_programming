#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * new_dog - printe un perro
 *
 *@name:  es el nombre perro
 *@age:  es la edad perro
 *@owner:  es el duenio perro
 *  Return:  0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog1;


if (name == NULL || owner == NULL)
{
return (NULL);
}
dog1 = malloc(sizeof(dog_t));

if (dog1 == NULL)
{
free(dog1->name);
free(dog1->owner);
free(dog1);
return (NULL);
}

dog1->name = name;
dog1->age = age;
dog1->owner = owner;
printf("My name is %s, I am %.2f, and my owner is %s\n", dog1->name, dog1->age, dog1->owner);
return (dog1);
}
