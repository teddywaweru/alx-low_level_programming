#include "main.h"
/*
 * _strncat - Concat n bytes from one string to another.
 * @dest: Destination string
 * @src: Source string
 * @n: number of bytes to be concatenated.
 *
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	if (n <= 0)
	{
		return (dest);
	} else
	{
		while (j != n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] = '\0';
		return (dest);
	}
}
