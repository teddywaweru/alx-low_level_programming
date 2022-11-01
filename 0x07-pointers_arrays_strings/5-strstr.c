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
	// iterate through haystack searching for needle
	// initialize haystack index pointer
	// check if char are similar, iterate unless end of needle, or pattern ends
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
