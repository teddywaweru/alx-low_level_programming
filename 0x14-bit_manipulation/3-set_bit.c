#include "main.h"
#include <stdio.h>

/**
 * set_bit - Set bit at a given index
 * @n: decimal number
 * @index: index value
 *
 * Returns 1 i successful else -1
 */
int set_bit(unsigned long int *n, unsigned int index) {
  // if index is larger than 63
  // bit shift decimal by index
  // if binary & 1 return 1
  // k
  unsigned long int var, mask;

  var = 0;
  mask = 1;
  if (index > 63)
    return (-1);
  var = *n | (mask << index);
  *n = var;
  return (1);
}
