#include "main.h"
/**
 * _strspn - returns initial number of bytes in s that are in accept
 * @s: string 
 * @accept: bytes that are wanted
 * 
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *t = accept;
	
	while (*s++)
	{
		while (*accept++)
		{
			if (*(s - 1) == *(accept - 1))
			{
				i++;
				break;
			}
		}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (i);
}
