#include "main.h"
/**
 * print_array - Prints a certain number of elements in an array.
 * @a: array
 * @n: number of elements to be printed
 *
 * Returns: None
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
