#include "dog.h"

/**
* init_dog - initializes a variable of type struct dog
* @d: struct dog.
* @name: name
* @age: age
* @owner: owner
* Return: nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
