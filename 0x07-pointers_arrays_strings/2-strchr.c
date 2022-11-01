#include "main.h"
/**
 * _strchr - Returns on the first occurrence of a specific character
 * @s: string of characters
 * @c: character to be searched for
 *
 * Return: Pointer to the first occurrence, or NULL
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
