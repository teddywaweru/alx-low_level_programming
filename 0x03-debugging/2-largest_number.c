#include "main.h"

/*
 * 2-largest_number - Get the largest number from a selection of three options
 * Returns: int - largest_number
 */

int largest_number(int a, int b, int c)
{
  //comparing numbers...
  //1. Check largest b2n a & b.
  //1.1.Check larget between 1 & c.
  //

  if ( a < b )
  {
    largest = a;
  }
  else
  {
    largest = b;
  }
  if  (largest > c)
  {
    continue;
  }
  else
  {
    largest = c;
  }
  return (largest);
}
