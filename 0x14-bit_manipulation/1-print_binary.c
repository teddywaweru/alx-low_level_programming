#include "main.h"
#include <stdio.h>

/*
 * print_binary - Get binary equivalent of decimal
 * @n: decmal number
 *
 * Returns: None
 */
void print_binary(unsigned long int n) {

  int i, flag, binary;
  flag = 0;

  if (n == 0)
    _putchar('0');

  for (i = 63; i >= 0; i--) {
    binary = (n >> i);
    if (binary != 0)
      flag = 1;
    if (flag != 0) {
      if (binary & 1)
        _putchar('1');
      else
        _putchar('0');
    }
  }
}
