#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: first integer
 * @b: second integer
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
