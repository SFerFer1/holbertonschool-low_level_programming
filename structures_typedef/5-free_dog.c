#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * free_dog - free a 
 *
 *@d:  es el perro
 *  Return:  nothing
 */
void free_dog(dog_t *d)
{

if (d == NULL)
retuen (NULL);

free(d->name);
free(d->age);
free(d->owner);
free(d);

}
