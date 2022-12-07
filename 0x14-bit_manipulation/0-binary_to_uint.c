#include "main.h"
#include <stdio.h>

/*
 * _pow - Get the second exponential of a number
 * @num: power number
 * @n: number of times
 *
 * Return: num^n
 */
unsigned int _pow(unsigned int num, unsigned int n) {
  unsigned int sum, i;
  sum = 1;

  for (i = 0; i < n; i++) {
    sum = sum * num;
  }

  return (sum);
}

/**
 * binary_to_uint - Convert binary number to unsigned int
 * @b: string
 *
 * Return: The converted number or 0
 */
unsigned int binary_to_uint(char *b) {
  unsigned int decimal, i, k;

  decimal = 0;
  i = 0;
  if (b == NULL)
    return (0);

  for (k = 0; b[k] != '\0'; k++) {
    if ((b[k] != '0') && (b[k] != '1'))
      return (0);
  }
  k -= 1;
  while (b[i] != '\0') {
    if (b[k - 1] == '1') {
      if (i == 0)
        decimal += 1;
      else
        decimal += _pow(2, i);
    }
  }
  return (decimal);
}
