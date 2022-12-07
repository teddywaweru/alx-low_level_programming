#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of the bit at the index position
 * @n: decimal number
 * @index: index value
 *
 * Returns: value of the bit at the index, or -1
 */
int get_bit(unsigned long int n, unsigned int index) {
  // if index is greater than 63,
  // bit shift up to the index value
  // do an & to determine if 1 or 0 & return
  int binary;

  if (index > 63)
    return (-1);
  binary = (n << index);

  if (binary & 1)
    return (1);
  else
    return (0);

  return (-1);
}
