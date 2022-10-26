#include "main.h"
/**
 * print_rev - Print a string in reverse order
 * @s: string to be printed
 *
 * Return: None
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar("\n");
}
