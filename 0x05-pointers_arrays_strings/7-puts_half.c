#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: String to be printed
 *
 * Return: None
 */
void puts_half(char *str)
{
	int len = 0;
	int idx = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (int i = (len / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);	
		}
	} else if (len % 2)
	{
		for (int i = ((len - 1) / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);	
		}
	}
	_putchar('\n'):
}
