#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}/char *_strbrk(char *s, char *accept)
//{
//	while (s != '\0')
//	{
//		while (accept != '\0')
//		{
//			if (s == accept)
//			{
//				return (s);
//			}
//		accept++;
//		}
//		s++;
//	}
//	return (0);
//}
