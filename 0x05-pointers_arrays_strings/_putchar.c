#include <unistd.h>
#include "main.h"

/*
 * _putschar - prints the string provided
 * @c: string to be printed
 *
 * Returns: 1 on success, 0 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
