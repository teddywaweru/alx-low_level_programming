#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints a dog struct
 * @d: dog struct
 *
 * Returns: None
 */
void print_dog(struct dog *d) {
  char *name, *owner;
  int age;

  if (d != NULL) {
    printf("Name: %s/nAge: %f\nOwner: %s", d->name == NULL ? "(nil)" : d->name,
           d->age, d->owner == NULL ? "(nil)" : d->owner);
  }
}
