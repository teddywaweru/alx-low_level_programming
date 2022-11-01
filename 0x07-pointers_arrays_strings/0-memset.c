#include "stdio.h"
/**
 * _memset - Fill the first n bytes of the
 * with a constant byte
 * @s: Memory Pointer
 * @b: constant byte for filling
 * @n: Number of bytes to fill
 *
 * Return: a pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i=0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
