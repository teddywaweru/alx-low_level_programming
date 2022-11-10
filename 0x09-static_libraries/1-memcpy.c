#include "main.h"
/**
 * _memcpy - Copy n bytes from memory area src to memory area dest
 * @dest: Memory area to be copied to
 * @src: Memory area to copy from
 * @n: Number of bytes to copy
 *
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
