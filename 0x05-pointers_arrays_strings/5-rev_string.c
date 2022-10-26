#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: string to be reversed
 *
 * Return: None
 */

void rev_string(char *s)
{
	char *string_bak = s;
	char store[1000];
	short idx = 0;

	while (*s != '\n')
	{
		store[idx] = *s;
		s++;
		idx++;
	}
	idx = 0;
	while (s > string_bak)
	{
		s--;
		*s = store[idx];
		idx++;
	}
}

