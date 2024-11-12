#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Representa la información de un perro
 * @name: El nombre del perro.
 * @age: La edad del perro.
 * @owner: El nombre del dueño del perro.
 *
 * Descripción: Esta estructura almacena los detalles de un perro,
 * incluyendo su nombre, edad y el dueño que lo posee.
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);



#endif
