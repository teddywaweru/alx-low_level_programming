#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free dog structure
 *@d:dog struct
 * Return: no return
 */
void free_dog(struct dog *d) {

  if (d != NULL) {
    free(d->name);
    free(d->owner);
    free(d);
  }
}
int main() { return (0); }
