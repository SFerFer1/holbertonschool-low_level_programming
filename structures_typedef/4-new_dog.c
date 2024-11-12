#include "dog.h"
#include<stdio.h>
#include<stdlib.h>



/**
 * tamanio -  dice el tamanio de un string
 *
 *@str:  el string
 *
 *  Return:  tamanio de string
 */
int tamanio(const char *str)
{
int count = 0;
while (str[count] != '\0')
{
count++;
}
return (count);
}
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
int i;

if (name == NULL || owner == NULL)
{
return (NULL);
}
dog1 = malloc(sizeof(dog_t));
if (dog1 == NULL)

return (NULL);

dog1->name = malloc(tamanio(owner) + 1);
if (dog1->name == NULL)
{
free(dog1->name);
free(dog1);
return (NULL);
}
for (i = 0; i <= tamanio(owner); i++)
dog1->name[i] = name[i];

dog1->age = age;

dog1->owner = malloc(tamanio(owner) + 1);
if (dog1->owner == NULL)
{
free(dog1->name);
free(dog1->owner);
free(dog1);
return (NULL);
}
for (i = 0; i <= tamanio(owner); i++)
dog1->owner[i] = owner[i];

return (dog1);
}
