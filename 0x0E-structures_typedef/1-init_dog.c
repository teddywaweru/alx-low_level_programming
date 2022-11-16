#include "dog.h"
#include "main.h"
#include <stdio.h>
/**
 * init_dog - Initiates an object of a dog struct
 * @d: a dog struct
 * @name: dog.name
 * @age: dog.age
 * @owner: dog.owner
 *
 * Returns: None
 */
void init_dog(struct dog *d, char *name, float age, char *owner) {

  if (d != NULL) {
    d->name = name;
    d->age = age;
    d->owner = owner;
  }
}
