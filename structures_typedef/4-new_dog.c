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
free(dog1);
return (NULL);
}
dog1->name = name;
dog1->name = malloc(strlen(name) + 1);
if (dog1->name == NULL)
{
free(dog1->name);
free(dog1);
return (NULL);
}
dog1->age = age;
dog1->owner = owner;
dog1->owner = malloc(strlen(owner) + 1);
if (dog1->owner == NULL)
{
free(dog1->owner);
free(dog1);
return (NULL);
}
return (dog1);
}
