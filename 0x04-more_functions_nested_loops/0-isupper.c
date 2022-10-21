#include "main.h"
/**
 * _isupper: checs if the character is uppercase
 * Returns: 1- is uppercase
 *          2- is nt uppercase
 */
int _isupper(int c)
{
  if ( c >= 65 && c <= 90 )
    return (1);
  else return (0);
}
