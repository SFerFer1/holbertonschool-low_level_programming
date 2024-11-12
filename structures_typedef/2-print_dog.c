#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_dog - printe un perro
 *
 *@d:  es el perro
 *  Return:  0
 */

void print_dog(struct dog *d)
{
if (d == NULL)
{
exit(0);
}
if (d->name == NULL)
printf("Name: (nil)");
else
printf("Name: %s", d->name);
printf("Age: %f", d->age);
if (d->owner == NULL)
printf("Owner: (nil)");
else
printf("Owner: %s", d->owner);


}

