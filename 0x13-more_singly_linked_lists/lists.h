#ifndef LIST_H
#define LIST_H

typedef struct listint_s {
  int n;
  struct listint_s *next;
} listint_t;
#endif

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to next integer in the node
 *
 * Description: singly linked list node structure
 */
