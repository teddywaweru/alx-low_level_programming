#include "main.h"

/**
 * _strlen - Get the length of a string
 * @s: string pointer
 *
 * Return l: Length of string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
