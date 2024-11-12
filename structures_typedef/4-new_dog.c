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
if (name == 0 || owner == 0)
return(NULL);

if (new_dog == NULL)
{
return NULL;
}


dog dog1;

dog1->name =name;
dog1->age = age;
dog1->owner = owner;

return(dog1);
}
