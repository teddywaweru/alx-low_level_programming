#include "main.h"
/**
 * _strstr - find first occurrence of a substring needle in a string haystack
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to beginning of substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *fneedle = needle;

		while (*haystack)
		{
			while (*needle)
			{
				if (*haystack++ != *needle++)
				{
					break;
				}
			}
			if (!*needle)
			{
				return (result);
			}
			needle = fneedle;
			result++;
			haystack = result;
		}
		return (0);
}
