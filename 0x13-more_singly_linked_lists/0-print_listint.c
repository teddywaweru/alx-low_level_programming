#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of a list_t list
 * @h: first element of the list
 *
 * Returns: the number of nodes in the list_t
 */
size_t print_listint(const listint_t *h) {
  int i = 0;

  while (h != NULL) {
    printf("%d", h->n);
    i++;
    h = h->next;
    printf("\n");
  }
  return (i);
}
