#include "dog.h"
#include<stdlib.h>
/**
 * init_dog - say if a random number is positive or negative
 *
 *@d: int n es un numero cualquiera
 *@name: int n es un numero cualquiera
 *@age: int n es un numero cualquiera
 *@owner: int n es un numero cualquiera
 *  Return:  0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
printf("OK\n");
exit(0);
}
d->name = name;
d->age = age;
d->owner = owner;

}
